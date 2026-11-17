
uint FUN_02e52804(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  undefined *local_30;
  char *pcStack_28;
  
  if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
     (*(int *)(DAT_0537d558 + 0x80) != 1)) {
    pbVar1 = (byte *)(param_1 + 0x1f8);
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "SeqHotelMannequinTutorialDone";
    local_30 = puVar2;
    iVar4 = FUN_0274bce0(pbVar1,&local_30);
    uVar5 = 0;
    if (iVar4 == 0) goto LAB_02e52920;
    pcStack_28 = "IsAccessHotelMannequin";
    local_30 = puVar2;
    iVar4 = FUN_0274bce0(pbVar1,&local_30);
    if (((iVar4 == 0) && (uVar6 = FUN_03394720(pbVar1), (uVar6 & 1) != 0)) && (DAT_056658d0 != 0)) {
      lVar3 = DAT_056658d0 + (ulong)*pbVar1 * 800 + 0x220;
      if (7 < *pbVar1) {
        lVar3 = DAT_056658d0 + 0x1b20;
      }
      if ((*(byte *)(lVar3 + 0x30c) & 1) == 0) {
        if (DAT_054f5738 == 0) {
          if ((DAT_054f08d8 & 1) == 0) {
            iVar4 = __cxa_guard_acquire(&DAT_054f08d8);
            puVar7 = &DAT_054f08d0;
            if (iVar4 != 0) {
              DAT_054f08d0 = 0;
              __cxa_guard_release(&DAT_054f08d8);
              puVar7 = &DAT_054f08d0;
            }
          }
          else {
            puVar7 = &DAT_054f08d0;
          }
        }
        else {
          puVar7 = (uint *)(DAT_054f5738 + 0x200);
        }
        local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
        if ((*puVar7 >> 2 & 1) == 0) {
          uVar5 = FUN_00a782f0(pbVar1);
          goto LAB_02e52920;
        }
      }
    }
  }
  uVar5 = 0;
LAB_02e52920:
  return uVar5 & 1;
}

