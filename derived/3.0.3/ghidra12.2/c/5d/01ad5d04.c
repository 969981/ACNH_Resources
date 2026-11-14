
void FUN_01ad5d04(undefined8 *param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_04a36b50;
  *(undefined2 *)(param_1 + 1) = *param_2;
  *(undefined1 *)((long)param_1 + 10) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 0xb) = *(undefined1 *)((long)param_2 + 3);
  uVar1 = *(undefined4 *)(param_2 + 2);
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0xc) = uVar1;
  puVar2 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar4 = DAT_0532a768;
  if (*(long *)puVar2 != 0) {
    lVar5 = *(long *)(lVar5 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar5 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8), lVar4 != 0)) {
        param_1[2] = lVar4;
      }
    }
  }
  return;
}

