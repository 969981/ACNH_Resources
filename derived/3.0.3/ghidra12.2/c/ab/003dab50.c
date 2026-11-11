
undefined8
FUN_003dab50(long param_1,long param_2,long param_3,long param_4,uint param_5,uint param_6)

{
  byte *pbVar1;
  long lVar2;
  ushort *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (*(int *)(param_1 + 0x50) < 1) {
    return 1;
  }
  if (((param_5 & 1) == 0) || ((param_6 & 1) == 0)) {
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x20) + 0xda) != '\0') {
        return 0;
      }
      lVar2 = *(long *)(param_2 + lVar6 * 8);
      if (*(long *)(param_3 + 0x20) != 0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x30))
                  (*(long **)(param_1 + 0x28),*(long *)(param_3 + 0x20),2);
      }
      lVar2 = lVar2 + param_4;
      lVar5 = *(long *)(param_3 + 0x28);
      lVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                        (*(long **)(param_1 + 0x28),lVar2,lVar5,0);
      if (lVar4 != lVar5) {
        return 0;
      }
      FUN_003b6c7c(lVar2,*(undefined8 *)(param_3 + 0x28));
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x50));
  }
  else {
    lVar6 = 0;
    lVar2 = param_1 + 0x2800;
    puVar3 = (ushort *)(param_1 + 0x3c0);
    do {
      if (*(char *)(*(long *)(param_1 + 0x20) + 0xda) != '\0') {
        return 0;
      }
      lVar4 = *(long *)(param_2 + lVar6 * 8);
      if (*(long *)(param_3 + 0x20) != 0) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x30))
                  (*(long **)(param_1 + 0x28),*(long *)(param_3 + 0x20),2);
      }
      pbVar1 = (byte *)(lVar4 + param_4);
      lVar5 = *(long *)(param_3 + 0x28);
      lVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x20))
                        (*(long **)(param_1 + 0x28),pbVar1,lVar5,0);
      if (lVar4 != lVar5) {
        return 0;
      }
      FUN_003b6c7c(pbVar1,*(undefined8 *)(param_3 + 0x28));
      *puVar3 = (ushort)*pbVar1;
      FUN_003c2d10(puVar3,lVar2,(int)(*(ulong *)(param_3 + 0x10) / 0xe) * 0xe,pbVar1);
      lVar6 = lVar6 + 1;
      lVar2 = lVar2 + 0xc0;
      *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x368);
      puVar3 = puVar3 + 0x20;
    } while (lVar6 < *(int *)(param_1 + 0x50));
  }
  return 1;
}

