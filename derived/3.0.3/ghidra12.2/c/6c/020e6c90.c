
undefined8 FUN_020e6c90(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  void *__src;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  void *__dest;
  long local_698;
  void *local_690;
  undefined8 local_640;
  undefined4 local_638;
  undefined1 auStack_24 [4];
  
  *(undefined1 *)(param_1 + 0x268) = 0;
  uVar3 = FUN_0291e130(&local_640,auStack_24,1);
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 0x260);
    if (uVar2 < 8) {
      *(undefined4 *)(param_2 + 4) = 10;
      *(undefined8 *)(param_2 + 8) = local_640;
      *(undefined4 *)(param_2 + 0x10) = local_638;
      *(undefined4 *)(param_2 + 0x18) = 0x80000000;
      FUN_0071b954(&local_698,"%s/AIC:CafeCustomer/AIF:AI_NPC_MuseumCafeCustomer",
                   (&PTR_DAT_04a74010)[uVar2]);
      __dest = *(void **)(param_2 + 0x38);
      (**(code **)(local_698 + 0x18))(&local_698);
      __src = local_690;
      if (__dest != local_690) {
        (**(code **)(local_698 + 0x18))(&local_698);
        lVar5 = 0;
        do {
          if (*(char *)((long)local_690 + lVar5) == '\0') goto LAB_020e6da4;
          if (*(char *)((long)local_690 + lVar5 + 1) == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_020e6da4;
          }
          if (*(char *)((long)local_690 + lVar5 + 2) == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_020e6da4;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_020e6da4:
        iVar1 = (int)lVar5;
        if (*(int *)(param_2 + 0x40) <= (int)lVar5) {
          iVar1 = *(int *)(param_2 + 0x40) + -1;
        }
        memcpy(__dest,__src,(long)iVar1);
        *(undefined1 *)((long)__dest + (long)iVar1) = 0;
      }
      uVar4 = 1;
      *(undefined8 *)(param_2 + 0x1c) = 0x1ffffffff;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

