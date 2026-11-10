
void FUN_00375ae0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  undefined8 local_b8;
  undefined1 auStack_b0 [128];
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf | 0xe0;
  uVar6 = FUN_003762e4();
  if ((((uVar6 & 1) == 0) && (uVar6 = FUN_003763bc(param_1,param_2,param_4), (uVar6 & 1) == 0)) &&
     (uVar6 = FUN_00376670(param_1,&local_b8,auStack_b0,param_3), (uVar6 & 1) == 0)) {
    lVar7 = FUN_0036abf8(*(undefined8 *)(param_4 + 0x38),param_2,0x4d524f4e,local_b8,auStack_b0);
    *(long *)(param_1 + 0x20) = lVar7;
    uVar4 = FUN_0038c040(*(undefined8 *)(lVar7 + 0x38),0x4d524f4e,local_b8,auStack_b0);
    *(undefined2 *)(param_1 + 0x4a) = uVar4;
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) | 0xf0;
    uVar1 = *(uint *)(param_1 + 0x14) & 3;
    if (uVar1 != 0) {
      uVar2 = *(uint *)(param_1 + 0x10);
      lVar9 = *(long *)(param_1 + 0x18);
      uVar6 = (ulong)(uVar2 >> 2) & 3;
      lVar3 = ((ulong)uVar2 & 3) * 0x10;
      lVar7 = lVar9 + lVar3 + uVar6 * 0x14;
      if (*(char *)(lVar7 + 1) != '\a') {
        if ((uVar1 == 1) || (*(char *)(lVar7 + 0x11) == '\a')) {
          uVar10 = 1;
        }
        else if (uVar1 == 2) {
          uVar10 = 2;
        }
        else {
          uVar10 = 2;
          if (*(char *)(lVar7 + 0x21) != '\a') {
            uVar10 = 3;
          }
        }
        if (uVar1 <= uVar10) {
          return;
        }
      }
      uVar8 = FUN_00386110(*(undefined8 *)(param_1 + 0x20),uVar4);
      uVar5 = FUN_0034e3c0(uVar8,4,3,"uConstantBufferForBrickRepeatPixelShader");
      *(undefined4 *)
       (lVar9 + (((ulong)uVar2 & 0x30) + lVar3 | (ulong)(uVar2 >> 6) & 8) +
                ((ulong)(uVar2 >> 8) & 0xc) + ((ulong)(uVar2 >> 4) & 0x1c) +
                ((ulong)(uVar2 >> 0xc) & 8) +
                ((ulong)(uVar2 >> 0xd) & 0x60) + (ulong)(-(uVar2 >> 0xc & 1) & 0xc) +
                (ulong)(-(uVar2 >> 0x10 & 1) & 0x1c) +
                ((ulong)(uVar2 >> 0xc) & 0x10) * ((ulong)(uVar2 >> 6) & 7) +
                (ulong)((int)(uVar2 << 0xe) >> 0x1f & 0x74) +
                (((ulong)(uVar2 >> 0xd) & 3) + uVar6) * 0x14 + 8) = uVar5;
    }
  }
  return;
}

