
undefined8 FUN_02040e90(float *param_1,uint *param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  
  uVar8 = nn::os::GetSystemTick();
  lVar10 = *(long *)(param_3 + 0x20);
  if (0 < (int)*(uint *)(lVar10 + 8)) {
    uVar6 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
    uVar8 = 0;
    uVar2 = uVar6 ^ uVar6 * 0x800;
    uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 2;
    uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 3;
    uVar6 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
    uVar11 = (ulong)*(uint *)(lVar10 + 0x18) * (ulong)(uVar2 >> 8 ^ uVar6 >> 0x13 ^ uVar2 ^ uVar6)
             >> 0x20;
    do {
      if ((*(uint *)(*(long *)(lVar10 + 0x10) + (ulong)(uVar8 >> 5) * 4) >> (ulong)(uVar8 & 0x1f) &
          1) != 0) {
        if ((int)uVar11 == 0) {
          iVar3 = *(int *)(lVar10 + 0x1c);
          iVar7 = 0;
          if (iVar3 != 0) {
            iVar7 = (int)uVar8 / iVar3;
          }
          uVar4 = *param_3;
          iVar3 = iVar7 * iVar3;
          iVar1 = ((uint)uVar4 - iVar3) + uVar8;
          uVar5 = param_3[1];
          if (param_1 != (float *)0x0) {
            *param_1 = (float)iVar1 * 5.0;
            param_1[2] = (float)(int)(iVar7 + (uint)uVar5) * 5.0;
          }
          puVar9 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
          iVar7 = iVar7 + (uint)uVar5 + -1;
          uVar6 = puVar9[3];
          uVar2 = *puVar9 ^ *puVar9 << 0xb;
          *puVar9 = puVar9[1];
          puVar9[1] = puVar9[2];
          uVar2 = uVar2 >> 8 ^ uVar6 >> 0x13 ^ uVar2 ^ uVar6;
          puVar9[2] = uVar6;
          puVar9[3] = uVar2;
          *param_2 = uVar2;
          iVar1 = iVar1 + -1;
          FUN_035a4360(param_3,iVar1,iVar7,0);
          FUN_035a4360(param_3,iVar1,iVar7 + (uint)DAT_057763a8,0);
          FUN_035a4360(param_3,(((uint)uVar4 + (uint)DAT_057763b0) - iVar3) + uVar8 + -1,iVar7,0);
          FUN_035a4360(param_3,(((uint)uVar4 + (uint)DAT_057763b8) - iVar3) + uVar8 + -1,
                       iVar7 + (uint)DAT_057763c0,0);
          return 1;
        }
        uVar11 = (ulong)((int)uVar11 - 1);
      }
      uVar8 = uVar8 + 1;
    } while (*(uint *)(lVar10 + 8) != uVar8);
  }
  return 0;
}

