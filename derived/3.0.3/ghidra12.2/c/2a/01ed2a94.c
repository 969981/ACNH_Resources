
void FUN_01ed2a94(long param_1)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_60 [2];
  int local_58;
  int local_54;
  undefined4 local_44;
  
  local_60[0] = 3;
  *(ushort *)(param_1 + 0xad28) = *(ushort *)(param_1 + 0xad28) & 0xfff7;
  if (*(char *)(param_1 + 0xaf68) == '\0') {
    *(undefined4 *)(param_1 + 0xaf54) = 0;
  }
  *(undefined1 *)(param_1 + 0xaf68) = 0;
  *(undefined8 *)(param_1 + 0xaf3c) = 0xfffe;
  FUN_0277d4ac((undefined8 *)(param_1 + 0xaf3c));
  lVar8 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(lVar8 + 0x288);
  *(undefined4 *)(lVar8 + 0x288) = *(undefined4 *)(lVar8 + 0x28c);
  uVar2 = uVar2 ^ uVar2 << 0xb;
  *(undefined4 *)(lVar8 + 0x28c) = *(undefined4 *)(lVar8 + 0x290);
  uVar3 = *(uint *)(lVar8 + 0x294);
  *(uint *)(lVar8 + 0x290) = uVar3;
  uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
  *(uint *)(lVar8 + 0x294) = uVar2;
  *(int *)(param_1 + 0xaf4c) = (int)((ulong)uVar2 + (ulong)uVar2 * 2 >> 0x20) * 0x1e + 0x1e;
  *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x29c) = 0x43160000;
  local_44 = 1;
  *(undefined **)(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0x7ef8) = PTR_DAT_04bc15d0 + 0x10;
  puVar6 = PTR_DAT_04bb5d40;
  FUN_01edbd98(local_60,param_1,&local_44,PTR_DAT_04bb5d40,0x19,0x15);
  if ((local_58 != *(int *)(puVar6 + 8)) || (local_54 != *(int *)(puVar6 + 0xc))) {
    uVar7 = FUN_01edc660(param_1,local_60);
    if ((uVar7 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xaf34) = 1;
      pfVar1 = (float *)(param_1 + 0x56ec);
      fVar12 = *pfVar1;
      fVar13 = *(float *)(param_1 + 0x56f0);
      fVar11 = *(float *)(param_1 + 0x56f4);
      if (((fVar12 == 0.0) && (fVar13 == 0.0)) && (fVar11 == 0.0)) {
        return;
      }
      lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      fVar9 = *(float *)(lVar8 + 0x278) - fVar12;
      fVar10 = *(float *)(lVar8 + 0x280) - fVar11;
      if (SQRT(fVar10 * fVar10 + fVar9 * fVar9) < 5.0) {
        pfVar1[0] = 0.0;
        pfVar1[1] = 0.0;
        *(undefined4 *)(param_1 + 0x56f4) = 0;
        return;
      }
      FUN_02077fb0(*(undefined8 *)(param_1 + 0x89b8));
      *(float *)(param_1 + 0xa9f0) = fVar12;
      *(float *)(param_1 + 0xa9f4) = fVar13;
      *(undefined8 *)(param_1 + 0xa9fc) = 0x100000000;
      *(float *)(param_1 + 0xa9f8) = fVar11;
      *(undefined1 *)(param_1 + 0xaa44) = 0;
      *(undefined8 *)(param_1 + 0xaa18) = *(undefined8 *)(param_1 + 0xaa38);
      *(undefined4 *)(param_1 + 0xaa20) = *(undefined4 *)(param_1 + 0xaa40);
      *(undefined8 *)(param_1 + 0xaa04) = *(undefined8 *)(param_1 + 0xaa24);
      *(undefined8 *)(param_1 + 0xaa0c) = *(undefined8 *)(param_1 + 0xaa2c);
      *(undefined4 *)(param_1 + 0xaa14) = *(undefined4 *)(param_1 + 0xaa34);
      return;
    }
  }
  lVar8 = *(long *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xaf34) = 0;
  local_60[0] = 0;
  local_44 = 0;
  uVar2 = *(uint *)(lVar8 + 0x288);
  uVar4 = *(uint *)(lVar8 + 0x294);
  *(undefined4 *)(lVar8 + 0x288) = *(undefined4 *)(lVar8 + 0x28c);
  uVar5 = *(undefined4 *)(lVar8 + 0x290);
  uVar2 = uVar2 ^ uVar2 << 0xb;
  *(uint *)(lVar8 + 0x290) = uVar4;
  *(undefined4 *)(lVar8 + 0x28c) = uVar5;
  uVar3 = uVar2 ^ uVar4;
  *(uint *)(lVar8 + 0x294) = uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar3;
  *(uint *)(param_1 + 0xaf44) = (uVar3 >> 0x1e) * 0x1e + 0x3c;
  FUN_01e5a930(0x40000000,*(undefined8 *)(param_1 + 0x10),0,PTR_DAT_04bb2150,local_60,&local_44,
               PTR_DAT_04bc1600,6);
  return;
}

