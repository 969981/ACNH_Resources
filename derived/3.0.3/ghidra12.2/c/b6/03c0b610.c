
void FUN_03c0b610(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  DeliveryCacheProgress aDStack_2a8 [600];
  
  nn::os::GetSystemTick();
  nn::os::GetSystemTick();
  nn::bcat::DeliveryCacheProgress::DeliveryCacheProgress(aDStack_2a8);
  iVar1 = nn::bcat::RequestSyncDeliveryCache(aDStack_2a8);
  if (iVar1 == 0) {
    uVar2 = nn::bcat::DeliveryCacheProgress::GetStatus();
    lVar5 = *(long *)PTR_DAT_04bb29d0;
    iVar1 = nn::bcat::DeliveryCacheProgress::GetStatus();
    if (iVar1 != 9) {
      lVar6 = 0;
      do {
        nn::bcat::DeliveryCacheProgress::Update();
        uVar3 = nn::bcat::DeliveryCacheProgress::GetStatus();
        if (uVar2 != uVar3) {
          uVar2 = nn::bcat::DeliveryCacheProgress::GetStatus();
          nn::os::GetSystemTick();
          nn::bcat::DeliveryCacheProgress::GetStatus();
        }
        if (((uVar2 < 10) && ((1 << (ulong)(uVar2 & 0x1f) & 0x230U) != 0)) &&
           (lVar4 = nn::bcat::DeliveryCacheProgress::GetWholeDownloaded(), lVar6 < lVar4)) {
          lVar6 = nn::bcat::DeliveryCacheProgress::GetWholeDownloaded();
          nn::os::GetSystemTick();
        }
        nn::os::ConvertToTimeSpan(lVar5 / 0x14);
        nn::os::SleepThread();
        iVar1 = nn::bcat::DeliveryCacheProgress::GetStatus();
      } while (iVar1 != 9);
    }
    iVar1 = nn::bcat::DeliveryCacheProgress::GetResult();
    if (iVar1 == 0) goto LAB_03c0b694;
    iVar1 = nn::bcat::DeliveryCacheProgress::GetResult();
  }
  *(int *)(param_1 + 0x2d0) = iVar1;
  *(undefined1 *)(param_1 + 0x2d5) = 1;
LAB_03c0b694:
  nn::bcat::DeliveryCacheProgress::~DeliveryCacheProgress(aDStack_2a8);
  return;
}

