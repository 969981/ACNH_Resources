
uint FUN_006d3050(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_b0 [16];
  SystemEventType aSStack_a0 [40];
  char local_78;
  AsyncContext aAStack_70 [32];
  int local_34;
  
  *(undefined1 *)(param_1 + 0xc28) = 0;
  nn::os::GetSystemTick();
  nn::account::AsyncContext::AsyncContext(aAStack_70);
  uVar3 = nn::account::EnsureNetworkServiceAccountIdTokenCacheAsync
                    (aAStack_70,(UserHandle *)(param_1 + 8));
  local_34 = (int)uVar3;
  if (local_34 != 0) {
    uVar2 = FUN_006d3204(uVar3,&local_34);
    goto LAB_006d3124;
  }
  local_78 = '\0';
  local_34 = nn::account::AsyncContext::GetSystemEvent((SystemEvent *)aAStack_70);
  lVar6 = *(long *)PTR_DAT_04bb29d0;
  uVar4 = nn::os::TryWaitSystemEvent(aSStack_a0);
  puVar1 = PTR_DAT_04bcb7d8;
  while ((uVar4 & 1) == 0) {
    if (*(char *)(param_2 + 0x4d) != '\0' && *(char *)(param_1 + 0xc28) == '\0') {
      nn::account::AsyncContext::Cancel();
      *(undefined1 *)(param_1 + 0xc28) = 1;
    }
    lVar5 = *(long *)puVar1;
    if ((*(int *)(*(long *)(lVar5 + 0x60) + 0x5c) == 1) &&
       (*(char *)(*(long *)(lVar5 + 0x38) + 10) != '\0')) {
      FUN_0389df38(auStack_b0);
      lVar5 = *(long *)puVar1;
    }
    nn::os::ConvertToTimeSpan
              ((long)(lVar6 * (ulong)*(uint *)(*(long *)(lVar5 + 0x18) + 0x70)) / 1000);
    nn::os::SleepThread();
    uVar4 = nn::os::TryWaitSystemEvent(aSStack_a0);
  }
  uVar3 = nn::account::AsyncContext::GetResult();
  local_34 = (int)uVar3;
  if (local_34 == 0) {
    nn::os::GetSystemTick();
    uVar3 = nn::account::LoadNetworkServiceAccountIdTokenCache
                      ((ulong *)(param_1 + 0xc20),(char *)(param_1 + 0x20),0xc00,
                       (UserHandle *)(param_1 + 8));
    local_34 = (int)uVar3;
    if (local_34 != 0) goto LAB_006d3108;
    uVar2 = (uint)DAT_05ae6790;
  }
  else {
LAB_006d3108:
    uVar2 = FUN_006d3204(uVar3,&local_34);
  }
  if (local_78 != '\0') {
    nn::os::DestroySystemEvent(aSStack_a0);
  }
LAB_006d3124:
  nn::account::AsyncContext::~AsyncContext(aAStack_70);
  return uVar2;
}

