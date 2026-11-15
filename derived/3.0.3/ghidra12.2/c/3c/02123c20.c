
void FUN_02123c20(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  uVar1 = FUN_02119c7c();
  if (0xfffffffd < uVar1) {
    return;
  }
  if (uVar1 < *(uint *)(param_1 + 0x1e8)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)(int)uVar1 * 8);
  }
  else {
    lVar5 = 0;
  }
  if (*(int *)(param_1 + 0x1604) == 1) {
    if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
      puVar3 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar2 = FUN_006bd550(*puVar3,0);
      if ((iVar2 == 0x758f7eaf) && ((DAT_05aed670 != 0 && (*(long *)(DAT_05aed670 + 0x330) != 0))))
      {
        uVar1 = *(uint *)(*(long *)(DAT_05aed670 + 0x330) + 0x248);
        puVar4 = (undefined1 *)(lVar5 + 8);
        if (uVar1 < 8) {
          puVar4 = puVar4 + (ulong)uVar1 * 0x1c;
        }
        goto LAB_02123cf0;
      }
    }
    puVar4 = (undefined1 *)(lVar5 + 8);
  }
  else {
    puVar4 = (undefined1 *)(lVar5 + 0xcc);
  }
LAB_02123cf0:
  *puVar4 = 0;
  *(undefined8 *)(puVar4 + 4) = 0;
  *(undefined8 *)(puVar4 + 0xc) = 0;
  return;
}

