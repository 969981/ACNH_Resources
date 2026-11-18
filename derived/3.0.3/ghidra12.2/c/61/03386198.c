
void FUN_03386198(long param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  FUN_033d7140(param_1 + 0x280);
  puVar5 = PTR_DAT_04bb3170;
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 != -1) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((((*(uint *)(puVar1 + 4) & 1) != 0) &&
        (FUN_03453920(param_1 + 0x510), *(short *)puVar5 != *(short *)(param_1 + 0x500))) &&
       (uVar4 = *(int *)(param_1 + 0x9c0) - 1, 0 < *(int *)(param_1 + 0x9c0))) {
      *(uint *)(param_1 + 0x9c0) = uVar4;
      lVar6 = *(long *)(*(long *)(param_1 + 0x9c8) + (ulong)uVar4 * 8);
      if (lVar6 != 0) {
        if (*(int *)(param_1 + 0xac0) < *(int *)(param_1 + 0xac4)) {
          *(long *)(*(long *)(param_1 + 0xac8) + (long)*(int *)(param_1 + 0xac0) * 8) = lVar6;
          *(int *)(param_1 + 0xac0) = *(int *)(param_1 + 0xac0) + 1;
        }
        lVar7 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x100);
        if (lVar7 != 0) {
          if ((*(ushort *)(lVar6 + 0x10) >> 1 & 1) != 0) {
            FUN_015a30c0(lVar7,lVar6);
          }
          FUN_015a2a64(lVar7,lVar6,param_1 + 0x500,&DAT_0418ebe8,0,1,1);
        }
      }
    }
  }
  uVar2 = *(undefined2 *)puVar5;
  *(undefined1 *)(param_1 + 0x50c) = 0;
  *(undefined2 *)(param_1 + 0x500) = uVar2;
  *(undefined8 *)(param_1 + 0x504) = 0xffffffffffffffff;
  return;
}

