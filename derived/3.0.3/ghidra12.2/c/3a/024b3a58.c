
/* WARNING: Removing unreachable block (ram,0x024b3c44) */

void FUN_024b3a58(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  byte bVar13;
  byte bVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  float extraout_s0;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float unaff_s8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  float fStack_78;
  float local_74;
  undefined8 local_70;
  float fStack_68;
  float fStack_64;
  
  if (*(int *)(param_3 + 0x178) == 1) {
    puVar15 = &DAT_054e9a58;
    if (*(undefined8 **)(param_3 + 0x4c8) != (undefined8 *)0x0) {
      puVar15 = *(undefined8 **)(param_3 + 0x4c8);
    }
    local_90 = (undefined *)
               CONCAT44((float)(int)*(short *)(param_3 + 0x18e9) * 0.25,
                        (float)*(int *)(param_3 + 0x18e5) * 0.001);
    param_2 = 0x41200000;
    uStack_88 = (undefined *)CONCAT44(uStack_88._4_4_,(float)*(int *)(param_3 + 0x18eb) * 0.001);
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar15 + 0x4f,&local_90);
    if (*(int *)(param_3 + 0x178) == 0) {
      local_90 = (undefined *)CONCAT44(local_90._4_4_,10);
      if ((*(byte *)(param_3 + 0x18f5) >> 2 & 1) != 0) goto LAB_024b3bf8;
    }
    iVar4 = (uint)*(ushort *)(param_3 + 0x18ef) * 0x10000;
    plVar16 = &DAT_054e9a58;
    if (*(long **)(param_3 + 0x4c8) != (long *)0x0) {
      plVar16 = *(long **)(param_3 + 0x4c8);
    }
    lVar7 = (**(code **)(*plVar16 + 0x148))();
    iVar2 = iVar4 - *(int *)(lVar7 + 4);
    if (0xb60b5e < iVar2 + 0x5b05afU) {
      param_2 = 0x3e2aaaad;
      iVar11 = (int)((float)iVar2 * 0.1666667);
      iVar2 = 0x10000000;
      if (iVar11 < 1) {
        iVar2 = -0x5b05b0;
      }
      iVar4 = -0x10000000;
      if (0 < iVar11) {
        iVar4 = 0x5b05b0;
      }
      iVar1 = iVar11;
      if (iVar2 <= iVar11) {
        iVar1 = iVar2;
      }
      if (iVar4 <= iVar11) {
        iVar4 = iVar1;
      }
      iVar4 = iVar4 + *(int *)(lVar7 + 4);
    }
    *(int *)(lVar7 + 4) = iVar4;
  }
LAB_024b3bf8:
  puVar15 = *(undefined8 **)(param_3 + 0x60);
  if (puVar15 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar15 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar15 = &DAT_05240280;
    }
  }
  uVar6 = 0;
  if (puVar15[0x227] != 0) {
    local_90 = (undefined *)CONCAT44(local_90._4_4_,1);
    uVar6 = *(uint *)(puVar15 + 0x2d3) >> 1 & 1;
  }
  uVar8 = FUN_0170a6d0(puVar15,uVar6);
  if ((uVar8 & 1) != 0) {
    FUN_0231ade8(param_3,6);
  }
  puVar3 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 != 0) {
    lVar12 = *(long *)(*(long *)(param_3 + 0x60) + 0x1480);
    uVar6 = *(uint *)(lVar12 + ((ulong)*(uint *)(lVar12 + 0x10) & 1) * 0x20 + 0x28);
    if ((((uVar6 == 0) ||
         (plVar16 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                              ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
        ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar6)) {
      plVar16 = (long *)0x0;
    }
    if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
      plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar3;
      iVar4 = (**(code **)(*plVar9 + 0x60))();
      if (iVar4 < 0x11) {
        uVar6 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_024b3d20;
        uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_024b3d20:
      uVar6 = 0;
    }
    if (plVar16 != (long *)0x0) {
      if (((*PTR_DAT_04bbe260 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbe260), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bbe258 = PTR_DAT_04bbe250 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbe260);
      }
      uVar5 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bbe258);
      if ((uVar6 & uVar5) == 1) {
        uVar6 = FUN_024b1b70(param_3);
        lVar7 = *(long *)puVar3;
        if (lVar7 != 0) {
          if ((((uVar6 == 0) ||
               (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                                   (ulong)(uVar6 >> 0x14) * 8), plVar9 == (long *)0x0)) ||
              ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar6)) {
            plVar9 = (long *)0x0;
          }
          if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
            plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar7 = *(long *)puVar3;
            iVar4 = (**(code **)(*plVar10 + 0x60))();
            if (iVar4 < 0x11) {
              uVar6 = 1;
            }
            else {
              if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_024b3e0c;
              uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_024b3e0c:
            uVar6 = 0;
          }
          if (plVar9 != (long *)0x0) {
            if (((*PTR_DAT_04bb4b28 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb4b28), iVar4 != 0)) {
              *(undefined **)PTR_DAT_04bb4b20 = PTR_DAT_04bb2e50 + 0x10;
              __cxa_guard_release(PTR_DAT_04bb4b28);
            }
            uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb4b20);
            puVar3 = PTR_DAT_04bb2020;
            fVar20 = (float)param_2;
            if ((uVar6 & uVar5) == 1) {
              if ((plVar16[0xc] != 0) && (lVar7 = *(long *)(plVar16[0xc] + 0x1150), lVar7 != 0)) {
                local_90 = PTR_DAT_04bb2020 + 0x10;
                uStack_88 = &DAT_0408c87e;
                if (*(int *)(lVar7 + 0x30) != 0) {
                  lVar18 = *(long *)(lVar7 + 0x38);
                  lVar12 = 0;
                  lVar7 = (long)*(int *)(lVar7 + 0x30) << 3;
                  do {
                    plVar10 = (long *)**(undefined8 **)(lVar18 + lVar12 * 8);
                    uVar6 = (**(code **)(*plVar10 + 0x38))(plVar10,&local_90);
                    fVar20 = (float)param_2;
                    if (uVar6 != 0xffffffff) {
                      if (((((uint)lVar12 ^ 0xffffffff) & 0xffff) != 0) &&
                         ((uVar6 & 0xffff) != 0xffff)) {
                        unaff_s8 = 0.0;
                        if ((plVar16[0xc] == 0) ||
                           (lVar7 = *(long *)(plVar16[0xc] + 0x1150), lVar7 == 0))
                        goto LAB_024b420c;
                        local_90 = puVar3 + 0x10;
                        uStack_88 = &DAT_0408c87e;
                        if (*(int *)(lVar7 + 0x30) == 0) goto LAB_024b420c;
                        lVar17 = *(long *)(lVar7 + 0x38);
                        lVar12 = 0;
                        lVar18 = (long)*(int *)(lVar7 + 0x30) << 3;
                        goto LAB_024b3f98;
                      }
                      break;
                    }
                    lVar12 = lVar12 + 1;
                    lVar7 = lVar7 + -8;
                  } while (lVar7 != 0);
                }
              }
              puVar15 = *(undefined8 **)(param_3 + 0x60);
              if (puVar15 == (undefined8 *)0x0) {
                if ((DAT_052461c0 & 1) == 0) {
                  iVar4 = __cxa_guard_acquire(&DAT_052461c0);
                  puVar15 = &DAT_05240280;
                  if (iVar4 != 0) {
                    FUN_016fcf10(&DAT_05240280);
                    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                    __cxa_guard_release(&DAT_052461c0);
                  }
                }
                else {
                  puVar15 = &DAT_05240280;
                }
              }
              uVar8 = FUN_016ff740(puVar15,6,&local_90);
              fVar19 = extraout_s0;
              if ((uVar8 & 1) != 0) {
                fVar20 = (float)((ulong)plVar9[0x52] >> 0x20);
                fVar21 = (float)((ulong)plVar9[0x54] >> 0x20);
                fVar22 = (float)((ulong)plVar9[0x56] >> 0x20);
                unaff_s8 = fStack_64 +
                           fVar20 * (float)local_70 + fVar21 * (float)((ulong)local_70 >> 0x20) +
                           fVar22 * fStack_68;
                fVar19 = local_74 +
                         fVar20 * (float)uStack_80 + fVar21 * (float)((ulong)uStack_80 >> 0x20) +
                         fVar22 * fStack_78;
                fVar20 = (float)((ulong)uStack_88 >> 0x20) +
                         fVar20 * SUB84(local_90,0) + fVar21 * (float)((ulong)local_90 >> 0x20) +
                         fVar22 * SUB84(uStack_88,0);
              }
              goto LAB_024b4054;
            }
          }
        }
      }
    }
  }
  uVar6 = *(uint *)(param_3 + 0x1c04);
  goto joined_r0x024b41b0;
  while( true ) {
    lVar12 = lVar12 + 1;
    lVar18 = lVar18 + -8;
    if (lVar18 == 0) break;
LAB_024b3f98:
    plVar16 = (long *)**(undefined8 **)(lVar17 + lVar12 * 8);
    iVar4 = (**(code **)(*plVar16 + 0x38))(plVar16,&local_90);
    if (iVar4 != -1) {
      if ((((uint)lVar12 ^ 0xffffffff) & 0xffff) != 0) {
        fVar19 = 0.0;
        fVar20 = 0.0;
        if (iVar4 * 0x10000 != -0x10000) {
          plVar16 = (long *)**(undefined8 **)(*(long *)(lVar7 + 0x38) + (long)(short)lVar12 * 8);
          (**(code **)(*plVar16 + 0x70))(plVar16,&local_90,iVar4 * 0x10000 >> 0x10);
          unaff_s8 = fStack_64;
          fVar19 = local_74;
          fVar20 = uStack_88._4_4_;
        }
        goto LAB_024b4054;
      }
      break;
    }
  }
LAB_024b420c:
  fVar19 = 0.0;
  fVar20 = 0.0;
LAB_024b4054:
  bVar13 = *(byte *)(param_3 + 0x1ee8);
  lVar7 = *(long *)PTR_DAT_04bb48a0;
  if (7 < bVar13) {
    bVar13 = 0xff;
  }
  bVar14 = *(byte *)(lVar7 + 0x44);
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  if (bVar13 == bVar14) {
    lVar12 = 0;
LAB_024b4158:
    lVar7 = lVar7 + 0x40 + lVar12 * 0x20;
  }
  else {
    bVar14 = *(byte *)(lVar7 + 100);
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (bVar13 == bVar14) {
      lVar12 = 1;
      goto LAB_024b4158;
    }
    bVar14 = *(byte *)(lVar7 + 0x84);
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (bVar13 == bVar14) {
      lVar12 = 2;
      goto LAB_024b4158;
    }
    bVar14 = *(byte *)(lVar7 + 0xa4);
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (bVar13 == bVar14) {
      lVar12 = 3;
      goto LAB_024b4158;
    }
    bVar14 = *(byte *)(lVar7 + 0xc4);
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (bVar13 == bVar14) {
      lVar12 = 4;
      goto LAB_024b4158;
    }
    bVar14 = *(byte *)(lVar7 + 0xe4);
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (bVar13 == bVar14) {
      lVar12 = 5;
      goto LAB_024b4158;
    }
    bVar14 = *(byte *)(lVar7 + 0x104);
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (bVar13 == bVar14) {
      lVar12 = 6;
      goto LAB_024b4158;
    }
    bVar14 = *(byte *)(lVar7 + 0x124);
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (bVar13 == bVar14) {
      lVar12 = 7;
      goto LAB_024b4158;
    }
    lVar7 = lVar7 + 0x140;
  }
  *(float *)(lVar7 + 0x10) = fVar20;
  *(float *)(lVar7 + 0x14) = fVar19;
  *(float *)(lVar7 + 0x18) = unaff_s8;
  lVar7 = plVar9[0xd];
  fVar20 = fVar20 - *(float *)(lVar7 + 0x278);
  fVar19 = fVar19 - *(float *)(lVar7 + 0x27c);
  fVar21 = unaff_s8 - *(float *)(lVar7 + 0x280);
  if (SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar21 * fVar21) < 0.2) goto LAB_024b3ed0;
  uVar6 = *(uint *)(param_3 + 0x1c04);
joined_r0x024b41b0:
  if (uVar6 < 0x79) {
    return;
  }
LAB_024b3ed0:
  if (*(int *)(param_3 + 0x178) == 0) {
    uVar8 = FUN_02546f34(param_3 + 0x1ee8,*(undefined4 *)(param_3 + 0x230));
    if ((uVar8 & 1) == 0) {
      uStack_88 = (undefined *)((ulong)uStack_88 & 0xffffffff00000000);
      local_90 = (undefined *)CONCAT35(local_90._5_3_,0x100000006);
      FUN_02374e74(param_3,&local_90);
    }
  }
  else {
    *(uint *)(param_3 + 0x17cc) = *(uint *)(param_3 + 0x17cc) | 8;
    FUN_023164ec(param_3,6);
  }
  return;
}

