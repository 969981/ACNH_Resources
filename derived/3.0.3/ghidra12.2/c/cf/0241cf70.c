
bool FUN_0241cf70(long param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  uVar7 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar5 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    uVar7 = 0;
    if (uVar5 < 0x149) {
      uVar7 = uVar5;
    }
  }
  if (uVar7 != 0x134) {
    *(undefined8 *)(param_1 + 0x1980) = 0;
    *(undefined8 *)(param_1 + 0x1988) = 0;
    *(undefined8 *)(param_1 + 0x1990) = 0;
    *(undefined8 *)(param_1 + 0x1998) = 0;
    *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
    *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
    puVar1 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)(param_1 + 0x4c8);
    }
    *(undefined8 *)(param_1 + 0x19a0) = 0;
    *(undefined8 *)(param_1 + 0x19a8) = 0;
    *(undefined8 *)(param_1 + 0x19b0) = 0;
    *(undefined8 *)(param_1 + 0x19b8) = 0;
    *(undefined8 *)(param_1 + 0x19c0) = 0;
    *(undefined8 *)(param_1 + 0x19c8) = 0;
    *(undefined8 *)(param_1 + 0x19d0) = 0;
    *(undefined2 *)(param_1 + 0x19d8) = 0;
    *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
    *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
    fVar9 = *(float *)(puVar1 + 0x4f);
    fVar10 = *(float *)(puVar1 + 0x50);
    iVar8 = (int)(*(float *)((long)puVar1 + 0x27c) * 4.0);
    if (0x7ffe < iVar8) {
      iVar8 = 0x7fff;
    }
    if (iVar8 < -0x7fff) {
      iVar8 = -0x8000;
    }
    *(short *)(param_1 + 0x1984) = (short)iVar8;
    *(int *)(param_1 + 0x1980) = (int)(fVar9 * 999.99994);
    *(int *)(param_1 + 0x1986) = (int)(fVar10 * 999.99994);
    uVar4 = DAT_053e4ff0;
    *(undefined2 *)(param_1 + 0x198a) = *(undefined2 *)((long)puVar1 + 0x2b6);
    uVar5 = FUN_020e78f0(uVar4,param_1 + 0x1ee8);
    if (uVar5 < 10) {
      uVar6 = (undefined1)*(undefined4 *)(&DAT_0417a8c4 + (long)(int)uVar5 * 4);
    }
    else {
      uVar6 = 1;
    }
    *(undefined4 *)(param_1 + 0x1990) = param_2;
    *(undefined1 *)(param_1 + 0x198c) = uVar6;
    uVar5 = nn::os::GetSystemTick();
    uVar5 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 1;
    uVar3 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 2;
    uVar3 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
    *(undefined1 *)(param_1 + 0x1995) = 0;
    *(byte *)(param_1 + 0x1994) =
         (byte)((byte)((uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4 >> 0x18) ^
                (byte)(uVar5 * 0x800 >> 0x18) ^ (byte)(uVar5 >> 0x18)) >> 5;
    *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
    *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
    *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
    *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
    *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
    *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
    *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
    *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
    *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
    *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
    *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
    *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
    *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
    *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
    *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
    *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
    lVar2 = 0;
    if (*(long *)(param_1 + 0x70) != 0) {
      lVar2 = *(long *)(param_1 + 0x70) + 0x278;
    }
    FUN_03ebb160(lVar2,0x134);
  }
  return uVar7 != 0x134;
}

