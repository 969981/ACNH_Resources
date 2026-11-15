
void FUN_022f7c24(long param_1,long param_2,undefined2 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  long lVar10;
  float fVar11;
  byte local_70 [4];
  byte local_6c [4];
  undefined8 local_68;
  int local_60;
  int iStack_5c;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  lVar10 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar10 != 0) && (*(long *)(lVar10 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar10 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar10 + 0x488) != 0 && (*(long *)(*(long *)(lVar10 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar10 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) != 0)))) {
    uVar2 = FUN_0277d6c4(param_3);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      FUN_0124c030(auStack_58,param_3);
      uVar4 = FUN_0124dcb0(auStack_58);
      if ((uVar4 & 1) == 0) {
        uVar4 = FUN_0123d890(local_48,4);
        if ((uVar4 & 1) != 0) {
          iVar3 = FUN_022c94f4(param_3);
          if (iVar3 != 1) {
            if ((iVar3 == 0) && ((*(byte *)(param_2 + 0x21) & 1) != 0)) {
              *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
              *(undefined4 *)(param_1 + 0xc) = 5;
              goto LAB_022f7cd8;
            }
LAB_022f7d28:
            uVar8 = 10;
            goto LAB_022f7f14;
          }
          goto LAB_022f7cd0;
        }
        iVar3 = FUN_0123db50(auStack_50,local_48);
        if (iVar3 - 0xbU < 7) {
          uVar8 = 6;
        }
        else {
          iVar3 = FUN_0123db50(auStack_50,local_48);
          if ((iVar3 - 2U & 0xfffffff9) == 0) {
            uVar8 = 7;
            goto LAB_022f7f14;
          }
          iVar3 = FUN_0123db50(auStack_50,local_48);
          if ((6 < iVar3 - 0x18U) && (iVar3 = FUN_0123db50(auStack_50,local_48), iVar3 != 0x1f)) {
            iVar3 = FUN_0123db50(auStack_50,local_48);
            if (iVar3 - 0x23U < 9) {
              FUN_0124d150(&local_68,param_3,param_2 + 8);
              uVar8 = 2;
LAB_022f7dec:
              *(undefined4 *)(param_1 + 0xc) = uVar8;
              *(undefined4 *)(param_1 + 0x10) = (undefined4)local_68;
              *(undefined4 *)(param_1 + 0x14) = local_68._4_4_;
              return;
            }
            iVar3 = FUN_0123db50(auStack_50,local_48);
            puVar1 = PTR_DAT_04bb4778;
            if (iVar3 == 0x2e) {
              if ((*(byte *)(param_2 + 0x21) & 1) == 0) {
                pbVar9 = (byte *)(param_2 + 0x20);
                local_6c[0] = *pbVar9;
                if (7 < local_6c[0]) {
                  local_6c[0] = 0xff;
                }
                uVar4 = FUN_01251468(auStack_58,local_6c);
                puVar1 = PTR_DAT_04bb2010;
                local_70[0] = *pbVar9;
                if (7 < local_70[0]) {
                  local_70[0] = 0xff;
                }
                local_68 = PTR_DAT_04bb2010 + 0x10;
                local_60 = (int)((float)(int)*(float *)(param_2 + 8) / 5.0) -
                           (uint)(*(float *)(param_2 + 8) < 0.0);
                iStack_5c = (int)((float)(int)*(float *)(param_2 + 0x10) / 5.0) -
                            (uint)(*(float *)(param_2 + 0x10) < 0.0);
                uVar5 = FUN_01251760(auStack_58,local_70,&local_68,1);
                if (((uVar5 & 1) == 0) && ((uVar4 & 1) != 0)) {
                  uVar8 = 0xc;
                }
                else {
                  if ((uVar5 & 1) != 0) {
                    *(undefined4 *)(param_1 + 0xc) = 10;
                    local_68 = puVar1 + 0x10;
                    local_60 = (int)((float)(int)*(float *)(param_2 + 8) / 5.0) -
                               (uint)(*(float *)(param_2 + 8) < 0.0);
                    iStack_5c = (int)((float)(int)*(float *)(param_2 + 0x10) / 5.0) -
                                (uint)(*(float *)(param_2 + 0x10) < 0.0);
                    FUN_01229330(*(undefined8 *)PTR_DAT_04bb4778,pbVar9,&local_68,0);
                    FUN_0252d8f0(&local_68,pbVar9);
                    FUN_011c1660(pbVar9,&local_68,PTR_DAT_04bb37e0,0);
                    return;
                  }
                  uVar8 = 0xb;
                }
                *(undefined4 *)(param_1 + 0xc) = uVar8;
                uVar7 = 1;
                uVar6 = *(undefined8 *)PTR_DAT_04bb4778;
                fVar11 = *(float *)(param_2 + 0x10);
                local_60 = (int)((float)(int)*(float *)(param_2 + 8) / 5.0) -
                           (uint)(*(float *)(param_2 + 8) < 0.0);
              }
              else {
                uVar7 = 0;
                *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
                *(undefined4 *)(param_1 + 0xc) = 0xd;
                uVar6 = *(undefined8 *)puVar1;
                fVar11 = *(float *)(param_2 + 0x10);
                local_60 = (int)((float)(int)*(float *)(param_2 + 8) / 5.0) -
                           (uint)(*(float *)(param_2 + 8) < 0.0);
                puVar1 = PTR_DAT_04bb2010;
              }
              local_68 = puVar1 + 0x10;
              iStack_5c = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
              FUN_01229330(uVar6,param_2 + 0x20,&local_68,uVar7);
              return;
            }
            iVar3 = FUN_0123db50(auStack_50,local_48);
            if (iVar3 != 0x2d) {
              iVar3 = FUN_0123db50(auStack_50,local_48);
              if (iVar3 - 0x12U < 6) {
                FUN_0124d324(&local_68,param_3,param_2 + 8);
                uVar8 = 4;
                goto LAB_022f7dec;
              }
              goto LAB_022f7f10;
            }
            goto LAB_022f7d28;
          }
          uVar8 = 3;
        }
      }
      else {
LAB_022f7cd0:
        uVar8 = 5;
      }
      *(undefined4 *)(param_1 + 0xc) = uVar8;
LAB_022f7cd8:
      *(undefined2 *)(param_1 + 0x10) = *param_3;
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_3 + 1);
      *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)((long)param_3 + 3);
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 2);
      return;
    }
  }
LAB_022f7f10:
  uVar8 = 9;
LAB_022f7f14:
  *(undefined4 *)(param_1 + 0xc) = uVar8;
  return;
}

