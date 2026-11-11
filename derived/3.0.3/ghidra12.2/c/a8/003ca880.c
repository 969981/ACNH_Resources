
/* WARNING: Removing unreachable block (ram,0x003ca958) */
/* WARNING: Removing unreachable block (ram,0x003ca994) */
/* WARNING: Removing unreachable block (ram,0x003ca9c4) */
/* WARNING: Removing unreachable block (ram,0x003caa40) */
/* WARNING: Removing unreachable block (ram,0x003caa54) */
/* WARNING: Removing unreachable block (ram,0x003caa70) */
/* WARNING: Removing unreachable block (ram,0x003caa78) */
/* WARNING: Removing unreachable block (ram,0x003caa8c) */
/* WARNING: Removing unreachable block (ram,0x003caa68) */
/* WARNING: Removing unreachable block (ram,0x003ca974) */
/* WARNING: Removing unreachable block (ram,0x003caa00) */
/* WARNING: Removing unreachable block (ram,0x003caa94) */
/* WARNING: Removing unreachable block (ram,0x003caaa4) */
/* WARNING: Removing unreachable block (ram,0x003caa2c) */
/* WARNING: Removing unreachable block (ram,0x003caa98) */
/* WARNING: Removing unreachable block (ram,0x003caa30) */
/* WARNING: Removing unreachable block (ram,0x003caab8) */
/* WARNING: Removing unreachable block (ram,0x003caad8) */
/* WARNING: Removing unreachable block (ram,0x003caa3c) */
/* WARNING: Removing unreachable block (ram,0x003ca9d8) */
/* WARNING: Removing unreachable block (ram,0x003ca980) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_003ca880(long param_1,int *param_2,long param_3,long param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  undefined4 local_1010 [2];
  long local_1008;
  long lStack_1000;
  undefined8 local_ff8;
  undefined8 uStack_ff0;
  undefined8 local_fe8;
  undefined8 uStack_fe0;
  undefined8 local_fd8;
  undefined8 local_fd0;
  undefined8 local_fc8;
  undefined8 uStack_fc0;
  undefined8 local_fb8;
  undefined8 uStack_fb0;
  undefined8 local_fa8;
  undefined8 local_fa0;
  undefined4 local_f98;
  undefined4 local_f94;
  undefined4 uStack_f90;
  undefined4 local_f8c;
  byte local_f88;
  long local_f80;
  undefined1 local_f78 [3864];
  
  if (*(long *)(param_1 + 0x430) != param_1 + 0x428) {
    local_fb8 = 0;
    uStack_fb0 = 0;
    local_fc8 = 0;
    uStack_fc0 = 0;
    local_fd8 = 0;
    local_fd0 = 0;
    local_fe8 = 0;
    uStack_fe0 = 0;
    local_ff8 = 0;
    uStack_ff0 = 0;
    memset(local_f78,0,0xc10);
    local_1010[0] = nn::audio::PerformanceInfo::GetFrameIndex();
    local_f88 = nn::audio::PerformanceInfo::IsRenderingTimeLimitExceeded();
    local_f88 = local_f88 & 1;
    nn::audio::PerformanceInfo::GetEntries(param_2);
    local_fa8 = 0;
    iVar1 = nn::audio::PerformanceInfo::GetTotalProcessingTime();
    local_fa0 = nn::os::ConvertToTick((long)iVar1 * 1000);
    local_fd8 = 0;
    local_1008 = param_3;
    lStack_1000 = param_4;
    local_fd0 = nn::os::ConvertToTick(0);
    local_f98 = param_5;
    local_f94 = 0;
    uStack_f90 = param_5;
    local_f8c = nn::audio::PerformanceInfo::GetVoiceDropCount();
    local_f80 = param_4 - param_3;
    for (lVar2 = *(long *)(param_1 + 0x430); lVar2 != param_1 + 0x428; lVar2 = *(long *)(lVar2 + 8))
    {
      FUN_003cdea4(lVar2,local_1010);
    }
  }
  return;
}

