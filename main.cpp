#include "sleepy_discord/sleepy_discord.h"

class DiscordBotClient : public SleepyDiscord::DiscordClient {
public:
    using SleepyDiscord::DiscordClient::DiscordClient;

    void onMessage(SleepyDiscord::Message message) override {
        if (message.startsWith("ping")) {
            sendMessage(message.channelID, "pong");
        }
    }
};

int main(int argc, char *argv[]) {
    DiscordBotClient client(argv[0], SleepyDiscord::USER_CONTROLED_THREADS);
    client.run();
}
