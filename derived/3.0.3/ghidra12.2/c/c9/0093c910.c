
undefined8 FUN_0093c910(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = *(uint *)(param_1 + 0xe4);
  if ((int)uVar2 < 0x40) {
    fVar5 = *(float *)(param_2 + 0x10);
    fVar6 = *(float *)(param_1 + 0x4ca4);
    if ((fVar6 <= fVar5) &&
       (fVar7 = *(float *)(param_2 + 0x18), *(float *)(param_1 + 0x4cac) <= fVar7)) {
      bVar4 = true;
      if ((fVar5 <= *(float *)(param_1 + 0x4cb0)) &&
         (bVar4 = false, !NAN(*(float *)(param_1 + 0x4cb8)) && !NAN(fVar7))) {
        bVar4 = *(float *)(param_1 + 0x4cb8) < fVar7;
      }
      if (!bVar4) goto LAB_0093c9d0;
    }
    if (((((fVar6 <= *(float *)(param_2 + 0x1c)) &&
          (*(float *)(param_1 + 0x4cac) <= *(float *)(param_2 + 0x24))) &&
         (*(float *)(param_2 + 0x1c) <= *(float *)(param_1 + 0x4cb0))) &&
        (*(float *)(param_2 + 0x24) <= *(float *)(param_1 + 0x4cb8))) ||
       (((fVar6 <= *(float *)(param_2 + 0x28) &&
         (*(float *)(param_1 + 0x4cac) <= *(float *)(param_2 + 0x30))) &&
        ((*(float *)(param_2 + 0x28) <= *(float *)(param_1 + 0x4cb0) &&
         (*(float *)(param_2 + 0x30) <= *(float *)(param_1 + 0x4cb8))))))) {
LAB_0093c9d0:
      lVar1 = param_1 + 0xe8 + (ulong)uVar2 * 0x90;
      if (0x3f < uVar2) {
        lVar1 = param_1 + 0xe8;
      }
      *(float *)(lVar1 + 0x10) = fVar5;
      *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
      *(undefined4 *)(lVar1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
      *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
      *(undefined4 *)(lVar1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
      *(undefined4 *)(lVar1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
      *(undefined4 *)(lVar1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
      *(undefined4 *)(lVar1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
      *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
      *(undefined4 *)(lVar1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
      *(undefined4 *)(lVar1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
      *(undefined4 *)(lVar1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
      *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
      *(undefined4 *)(lVar1 + 100) = *(undefined4 *)(param_2 + 100);
      *(undefined1 *)(lVar1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
      *(undefined4 *)(lVar1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
      *(undefined4 *)(lVar1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
      uVar3 = *(undefined4 *)(param_2 + 0x80);
      *(undefined1 *)(lVar1 + 0x84) = *(undefined1 *)(param_2 + 0x84);
      *(undefined4 *)(lVar1 + 0x80) = uVar3;
      *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
      *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
      return 1;
    }
  }
  return 0;
}

