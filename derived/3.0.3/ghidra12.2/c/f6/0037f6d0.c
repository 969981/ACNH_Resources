
void FUN_0037f6d0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  long lVar8;
  undefined4 local_38;
  undefined4 local_34;
  
  *(long *)(param_1 + 0x58) = param_3;
  lVar8 = **(long **)(param_4 + 0x30) + 0xc;
  uVar1 = *(uint *)(lVar8 + (ulong)*(ushort *)(param_3 + 4) * 4);
  uVar4 = FUN_003693bc(*(undefined8 *)(param_4 + 0xa0));
  lVar5 = FUN_0036b150(uVar4,lVar8 + (ulong)uVar1);
  lVar8 = param_1 + 0x60;
  uVar7 = 3;
  if (0 < *(int *)(param_4 + 0xdc)) {
    uVar7 = 1;
  }
  *(undefined1 *)(lVar5 + 0x18) = uVar7;
  FUN_0038789c(lVar8,*(undefined8 *)(lVar5 + 8));
  FUN_003878b8(lVar8,*(byte *)(param_3 + 6) & 3,*(byte *)(param_3 + 7) & 3);
  FUN_003878d4(lVar8,*(byte *)(param_3 + 6) >> 2 & 3,*(byte *)(param_3 + 7) >> 2 & 3);
  local_34 = 0;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar5 + 0x20);
  lVar5 = FUN_0036abf8(*(undefined8 *)(param_4 + 0x20),param_2,0x48535244,1,&local_34);
  *(long *)(param_1 + 0xe0) = lVar5;
  lVar8 = 0;
  uVar4 = *(undefined8 *)(lVar5 + 0x38);
  do {
    local_38 = *(undefined4 *)((long)&DAT_04134ed8 + lVar8);
    iVar2 = FUN_0038c040(uVar4,0x48535244,1,&local_38);
    *(int *)(param_1 + lVar8 + 0xe8) = iVar2;
    if (-1 < iVar2) {
      uVar6 = FUN_00386110(*(undefined8 *)(param_1 + 0xe0),iVar2);
      uVar3 = FUN_0034e3c0(uVar6,4,3,"uDropShadowBlur");
      *(undefined4 *)(param_1 + lVar8 + 0x180) = uVar3;
    }
    lVar8 = lVar8 + 4;
  } while (lVar8 != 0x98);
  return;
}

