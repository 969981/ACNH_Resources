
void FUN_0203d130(long param_1,float *param_2)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  float fVar12;
  
  puVar8 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar3 = *puVar8 ^ *puVar8 << 0xb;
  uVar11 = puVar8[3];
  *puVar8 = puVar8[1];
  puVar8[1] = puVar8[2];
  uVar3 = uVar3 >> 8 ^ uVar11 >> 0x13 ^ uVar3 ^ uVar11;
  puVar8[2] = uVar11;
  puVar8[3] = uVar3;
  lVar9 = *(long *)(param_1 + 0x5898);
  if (0 < (int)*(uint *)(lVar9 + 8)) {
    puVar2 = (ushort *)(param_1 + 0x5858);
    uVar11 = 0;
    uVar3 = (uint)(((ulong)uVar3 << 0x20) - (ulong)uVar3 >> 0x20);
    uVar6 = (uVar3 >> 0x1e ^ uVar3) * 0x6c078965 + 1;
    uVar3 = uVar6 ^ uVar6 * 0x800;
    uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
    uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 3;
    uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
    uVar10 = (ulong)*(uint *)(lVar9 + 0x18) * (ulong)(uVar3 >> 8 ^ uVar6 >> 0x13 ^ uVar3 ^ uVar6) >>
             0x20;
    do {
      if ((*(uint *)(*(long *)(lVar9 + 0x10) + (ulong)(uVar11 >> 5) * 4) >> (ulong)(uVar11 & 0x1f) &
          1) != 0) {
        if ((int)uVar10 == 0) {
          iVar4 = *(int *)(lVar9 + 0x1c);
          iVar7 = 0;
          if (iVar4 != 0) {
            iVar7 = (int)uVar11 / iVar4;
          }
          uVar5 = *puVar2;
          iVar4 = iVar7 * iVar4;
          iVar7 = iVar7 + (uint)*(ushort *)(param_1 + 0x585a);
          iVar1 = ((uint)uVar5 - iVar4) + uVar11;
          if (param_2 != (float *)0x0) {
            *param_2 = (float)iVar1 * 5.0;
            param_2[2] = (float)iVar7 * 5.0;
          }
          iVar1 = iVar1 + -1;
          iVar7 = iVar7 + -1;
          FUN_035a4360(puVar2,iVar1,iVar7,0);
          FUN_035a4360(puVar2,iVar1,iVar7 + (uint)DAT_057763a8,0);
          FUN_035a4360(puVar2,(((uint)uVar5 + (uint)DAT_057763b0) - iVar4) + uVar11 + -1,iVar7,0);
          FUN_035a4360(puVar2,(((uint)uVar5 + (uint)DAT_057763b8) - iVar4) + uVar11 + -1,
                       iVar7 + (uint)DAT_057763c0,0);
          return;
        }
        uVar10 = (ulong)((int)uVar10 - 1);
      }
      uVar11 = uVar11 + 1;
    } while (*(uint *)(lVar9 + 8) != uVar11);
  }
  if (param_2 != (float *)0x0) {
    fVar12 = *(float *)PTR_DAT_04bb76e8;
    param_2[2] = (float)(int)((int)((float)(int)*(float *)(PTR_DAT_04bb76e8 + 8) / 5.0) -
                             (uint)(*(float *)(PTR_DAT_04bb76e8 + 8) < 0.0)) * 5.0;
    *param_2 = (float)(int)((int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0)) * 5.0;
  }
  return;
}

