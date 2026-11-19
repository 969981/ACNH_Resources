
void FUN_03a7f080(long param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong local_c8;
  long lStack_c0;
  long local_b8;
  undefined8 uStack_b0;
  long local_a8;
  
  lVar4 = *(long *)(param_1 + 0x448);
  if ((lVar4 != 0) && (*(char *)(*(long *)(param_1 + 8) + 0x470) != '\0')) {
    uStack_b0 = lVar4 + 0x608;
    lStack_c0 = lVar4 + 0x468;
    uVar1 = *(undefined1 *)(param_3 + 8);
    local_a8 = lVar4 + 0x2c8;
    local_c8 = lVar4 + 0x26e8;
    local_b8 = lStack_c0;
    if (*(int *)(lVar4 + 0x1e0) != 0) {
      plVar5 = *(long **)(lVar4 + 0x1e8);
      lVar6 = (long)*(int *)(lVar4 + 0x1e0) << 3;
      if ((*(byte *)(param_3 + 0x3c8) >> 2 & 1) == 0) {
        do {
          if (*(int *)(*plVar5 + 0x848) != 2) {
            FUN_039e6ca0(*plVar5,param_2,uVar1,&local_c8);
          }
          plVar5 = plVar5 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      else {
        do {
          FUN_039e6ca0(*plVar5,param_2,uVar1,&local_c8);
          lVar6 = lVar6 + -8;
          plVar5 = plVar5 + 1;
        } while (lVar6 != 0);
      }
      if (0 < *(int *)(lVar4 + 0x1e0)) {
        uVar2 = 0x12;
        if ((*(uint *)(*(long *)PTR_DAT_04bc1010 + 800) & 2) != 0) {
          uVar2 = 0x112;
        }
        (*DAT_04c62b58)(*(undefined8 *)(param_2 + 0xb8),uVar2);
        *(undefined8 *)(param_2 + 0x100) = 0;
      }
    }
    if (((*(byte *)(param_3 + 0x3c8) >> 2 & 1) != 0) && (0 < *(int *)(param_1 + 0x660))) {
      FUN_038e4cec(&local_c8);
      local_c8 = (local_c8 >> 0x10 & 0xffff) << 0x10;
      uStack_b0 = CONCAT44(0xffffff,(undefined4)uStack_b0);
      FUN_038e4d90(&local_c8,param_2);
      if (*(int *)(param_1 + 0x660) != 0) {
        lVar4 = (long)*(int *)(param_1 + 0x660) << 3;
        puVar3 = *(undefined8 **)(param_1 + 0x668);
        do {
          FUN_039c1820(*puVar3,param_2,*(undefined8 *)(param_1 + 0x448),*(undefined1 *)(param_3 + 8)
                      );
          lVar4 = lVar4 + -8;
          puVar3 = puVar3 + 1;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}

