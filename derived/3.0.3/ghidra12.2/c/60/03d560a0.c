
void FUN_03d560a0(long *param_1)

{
  undefined *puVar1;
  uint uVar2;
  ushort *__dest;
  long lVar3;
  ushort *puVar4;
  ushort uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined *local_78;
  ushort *local_70;
  ushort local_64 [2];
  
  if (*(short *)param_1[1] != 0) {
    (**(code **)(*param_1 + 0x18))();
    uVar7 = 0;
    do {
      if (*(short *)(param_1[1] + uVar7 * 2) == 0) {
LAB_03d56120:
        iVar6 = (int)uVar7;
joined_r0x03d56124:
        if (iVar6 < 1) {
          return;
        }
        uVar10 = 0;
        puVar1 = PTR_DAT_04bb8610 + 0x10;
        do {
          (**(code **)(*param_1 + 0x18))(param_1);
          lVar11 = param_1[1];
          uVar8 = 0;
          do {
            if (*(short *)(lVar11 + uVar8 * 2) == 0) goto LAB_03d561c4;
            lVar12 = lVar11 + uVar8 * 2;
            if (*(short *)(lVar12 + 2) == 0) {
              uVar8 = uVar8 + 1;
              goto LAB_03d561c4;
            }
            if (*(short *)(lVar12 + 4) == 0) {
              uVar8 = uVar8 + 2;
              goto LAB_03d561c4;
            }
            uVar8 = uVar8 + 3;
          } while (uVar8 != 0x80001);
          uVar8 = 0;
LAB_03d561c4:
          __dest = (ushort *)(lVar11 + uVar10 * 2);
          puVar4 = (ushort *)PTR_DAT_04bb2da0;
          if (uVar10 <= (uVar8 & 0xffffffff)) {
            puVar4 = __dest;
          }
          uVar5 = *puVar4;
          local_64[0] = uVar5 - 0x120;
          if (0x5d < uVar5 - 0x21) {
            local_64[0] = uVar5;
          }
          local_78 = puVar1;
          local_70 = local_64;
          (**(code **)(*param_1 + 0x18))(param_1);
          lVar12 = 0;
          do {
            if (*(short *)(param_1[1] + lVar12 * 2) == 0) goto LAB_03d56254;
            lVar3 = param_1[1] + lVar12 * 2;
            if (*(short *)(lVar3 + 2) == 0) {
              lVar12 = lVar12 + 1;
              goto LAB_03d56254;
            }
            if (*(short *)(lVar3 + 4) == 0) {
              lVar12 = lVar12 + 2;
              goto LAB_03d56254;
            }
            lVar12 = lVar12 + 3;
          } while (lVar12 != 0x80001);
          lVar12 = 0;
LAB_03d56254:
          uVar9 = (uint)uVar10;
          uVar2 = (int)param_1[2] + ~uVar9;
          if (1 < (int)((int)param_1[2] - uVar9)) {
            uVar2 = 1;
          }
          if (0 < (int)uVar2) {
            (**(code **)(local_78 + 0x18))(&local_78);
            memcpy(__dest,local_70,(ulong)uVar2 << 1);
            if ((int)lVar12 < (int)(uVar2 + uVar9)) {
              *(undefined2 *)(lVar11 + (long)(int)(uVar2 + uVar9) * 2) = 0;
            }
          }
          uVar10 = uVar10 + 1;
          if (uVar10 == (uVar7 & 0xffffffff)) {
            return;
          }
        } while( true );
      }
      lVar11 = param_1[1] + uVar7 * 2;
      if (*(short *)(lVar11 + 2) == 0) {
        uVar7 = uVar7 + 1;
        goto LAB_03d56120;
      }
      if (*(short *)(lVar11 + 4) == 0) {
        uVar7 = uVar7 + 2;
        iVar6 = (int)uVar7;
        goto joined_r0x03d56124;
      }
      uVar7 = uVar7 + 3;
    } while (uVar7 != 0x80001);
  }
  return;
}

