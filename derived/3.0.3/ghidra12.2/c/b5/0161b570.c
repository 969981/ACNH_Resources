
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0161b570(long param_1,long *param_2,long *param_3)

{
  size_t __size;
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  ushort uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  ulong *puVar17;
  void *pvVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  uint uVar23;
  long *plVar24;
  long lVar25;
  ulong *puVar26;
  uint uVar27;
  long *plVar28;
  ulong uVar29;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68;
  
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)((long)param_2 + 0x1c);
  if (*param_2 == 0) {
    lVar14 = param_2[2];
    if (lVar14 == 0) {
      lVar14 = *(long *)(param_1 + 0x188);
    }
    else {
      *(long *)(param_1 + 0x188) = lVar14;
    }
  }
  else {
    local_80 = (undefined4)param_2[4];
    local_70 = 0;
    local_68 = *PTR_DAT_04bb34b8;
    uStack_7c = *(undefined4 *)PTR_DAT_04bb34b0;
    local_78 = 0x1010101;
    lVar14 = FUN_03eb5ae0(param_2 + 5,*param_2,&local_80,param_3);
    *(long *)(param_1 + 0x188) = lVar14;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  uVar23 = *(uint *)(lVar14 + 0x30);
  if (0 < (int)uVar23) {
    uVar29 = 0;
    do {
      plVar24 = (long *)**(undefined8 **)(*(long *)(*(long *)(param_1 + 0x188) + 0x38) + uVar29 * 8)
      ;
      iVar8 = (**(code **)(*plVar24 + 0x1e0))(plVar24);
      if (0 < iVar8) {
        iVar8 = 0;
        do {
          FUN_039e9a58(param_1 + 0x120,plVar24,iVar8,param_3);
          iVar8 = iVar8 + 1;
          iVar9 = (**(code **)(*plVar24 + 0x1e0))(plVar24);
        } while (iVar8 < iVar9);
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar23);
    lVar14 = *(long *)(param_1 + 0x188);
  }
  lVar25 = param_2[1];
  if (lVar25 != 0) {
    lVar15 = *(long *)(lVar14 + 0x70);
    if ((lVar15 != 0) && (lVar15 != lVar25)) {
      FUN_03a03df0(lVar15,lVar14);
    }
    *(long *)(lVar14 + 0x70) = lVar25;
    FUN_03a03cf0(lVar25,lVar14);
    uVar23 = *(uint *)(lVar14 + 0x20);
    if ((uint)*(ushort *)(lVar14 + 0x284) <= *(uint *)(lVar14 + 0x20)) {
      uVar23 = (uint)*(ushort *)(lVar14 + 0x284);
    }
    if (uVar23 != 0) {
      lVar25 = *(long *)(lVar14 + 0x28);
      uVar27 = 0;
      do {
        plVar24 = *(long **)(lVar25 + (long)(int)uVar27 * 0x38);
        (**(code **)(*plVar24 + 0x268))(plVar24,*(undefined8 *)(lVar14 + 0x70));
        uVar27 = uVar27 + 1;
      } while (uVar23 != uVar27);
    }
    lVar14 = *(long *)(param_1 + 0x188);
  }
  *(int *)(param_1 + 0x194) = (int)param_2[3];
  uVar7 = _UNK_04102888;
  uVar6 = _DAT_04102880;
  uVar5 = _DAT_04102200;
  *(undefined8 *)(lVar14 + 0x240) = _UNK_04102208;
  *(undefined8 *)(lVar14 + 0x238) = uVar5;
  *(undefined8 *)(lVar14 + 0x250) = uVar7;
  *(undefined8 *)(lVar14 + 0x248) = uVar6;
  uVar6 = _UNK_041023d8;
  uVar5 = _DAT_041023d0;
  *(byte *)(lVar14 + 0x280) = *(byte *)(lVar14 + 0x280) | 1;
  *(undefined8 *)(lVar14 + 0x260) = uVar6;
  *(undefined8 *)(lVar14 + 600) = uVar5;
  lVar14 = *(long *)(param_1 + 0x188);
  uVar23 = *(uint *)(lVar14 + 0x20);
  if ((uint)*(ushort *)(lVar14 + 0x284) <= *(uint *)(lVar14 + 0x20)) {
    uVar23 = (uint)*(ushort *)(lVar14 + 0x284);
  }
  if (uVar23 != 0) {
    lVar14 = *(long *)(lVar14 + 0x28);
    uVar27 = 0;
    do {
      lVar25 = *(long *)(lVar14 + (long)(int)uVar27 * 0x38);
      *(ushort *)(lVar25 + 0xac) = *(ushort *)(lVar25 + 0xac) & 0xfffd;
      uVar27 = uVar27 + 1;
    } while (uVar23 != uVar27);
    lVar14 = *(long *)(param_1 + 0x188);
    uVar23 = *(uint *)(lVar14 + 0x20);
    if ((uint)*(ushort *)(lVar14 + 0x284) <= *(uint *)(lVar14 + 0x20)) {
      uVar23 = (uint)*(ushort *)(lVar14 + 0x284);
    }
    if (uVar23 != 0) {
      lVar14 = *(long *)(lVar14 + 0x28);
      uVar27 = 0;
      do {
        plVar24 = *(long **)(lVar14 + (long)(int)uVar27 * 0x38);
        uVar10 = (**(code **)(*plVar24 + 0xb8))(plVar24);
        if (0 < (int)uVar10) {
          if (uVar10 == 1) {
            uVar29 = 0;
          }
          else {
            lVar25 = 0;
            uVar29 = 0;
            do {
              uVar29 = uVar29 + 2;
              *(uint *)(plVar24[10] + lVar25) = *(uint *)(plVar24[10] + lVar25) & 0xfffffffb;
              *(byte *)((long)plVar24 + 0xae) = *(byte *)((long)plVar24 + 0xae) | 1;
              *(ushort *)(plVar24[10] + lVar25 + 6) = *(ushort *)(plVar24[10] + lVar25 + 6) | 2;
              *(uint *)(plVar24[10] + lVar25 + 0xc) =
                   *(uint *)(plVar24[10] + lVar25 + 0xc) & 0xfffffffb;
              lVar15 = plVar24[10] + lVar25;
              lVar25 = lVar25 + 0x18;
              *(byte *)((long)plVar24 + 0xae) = *(byte *)((long)plVar24 + 0xae) | 1;
              *(ushort *)(lVar15 + 0x12) = *(ushort *)(lVar15 + 0x12) | 2;
            } while (((ulong)uVar10 & 0xfffffffe) != uVar29);
          }
          if ((uVar10 & 1) != 0) {
            lVar25 = uVar29 * 0xc;
            *(uint *)(plVar24[10] + lVar25) = *(uint *)(plVar24[10] + lVar25) & 0xfffffffb;
            *(byte *)((long)plVar24 + 0xae) = *(byte *)((long)plVar24 + 0xae) | 1;
            *(ushort *)(plVar24[10] + lVar25 + 6) = *(ushort *)(plVar24[10] + lVar25 + 6) | 2;
          }
        }
        uVar27 = uVar27 + 1;
      } while (uVar23 != uVar27);
      lVar14 = *(long *)(param_1 + 0x188);
    }
  }
  if (*(int *)(lVar14 + 0x40) != 0) {
    lVar25 = (long)*(int *)(lVar14 + 0x40) << 3;
    puVar21 = *(undefined8 **)(lVar14 + 0x48);
    do {
      (**(code **)(**(long **)*puVar21 + 0x260))();
      lVar25 = lVar25 + -8;
      puVar21 = puVar21 + 1;
    } while (lVar25 != 0);
  }
  lVar14 = param_1 + 0xa8;
  lVar25 = *(long *)PTR_DAT_04bbd580;
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(lVar25 + 0x88);
  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(lVar25 + 0xb0);
  *(byte *)(param_1 + 0xe4) = *(byte *)(param_1 + 0xe4) & 0xfe;
  FUN_0390d990(lVar14,param_3,2,*(undefined4 *)(param_1 + 400));
  *(undefined1 *)(param_1 + 0xe1) = 0;
  (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(lVar14);
  (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(lVar14);
  puVar1 = PTR_DAT_04bb2cd8;
  uVar23 = *(uint *)(param_1 + 0xc0);
  lVar25 = 0;
  if (*(long *)(param_1 + 200) != 0) {
    lVar25 = (**(code **)PTR_DAT_04bb2cd8)();
  }
  *(ulong *)(param_1 + 0xb8) = lVar25 + (ulong)uVar23;
  if (0 < *(int *)(param_1 + 400)) {
    lVar25 = 0;
    do {
      uVar23 = *(uint *)(param_1 + 0xd8);
      lVar15 = *(long *)(param_1 + 0xb8);
      iVar8 = (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(lVar14);
      iVar9 = (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(lVar14);
      if (3 < uVar23) {
        memset((void *)(lVar15 + lVar25 * (ulong)((uVar23 + iVar8) - 1 & -iVar9)),0,
               (ulong)uVar23 & 0xfffffffc);
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < *(int *)(param_1 + 400));
  }
  uVar4 = *(ushort *)(param_1 + 0xe2);
  *(undefined1 *)(param_1 + 0xe1) = 1;
  iVar8 = *(int *)(param_1 + 0xd8);
  iVar11 = (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(lVar14);
  iVar12 = (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(lVar14);
  iVar9 = *(int *)(param_1 + 0xc0);
  lVar25 = 0;
  if (*(long *)(param_1 + 200) != 0) {
    lVar25 = (**(code **)puVar1)();
  }
  *(ulong *)(param_1 + 0xb8) =
       lVar25 + (ulong)(iVar9 + ((iVar8 + iVar11) - 1U & -iVar12) * (uint)uVar4);
  if (0 < *(int *)(param_1 + 400)) {
    lVar25 = 0;
    do {
      uVar23 = *(uint *)(param_1 + 0xd8);
      lVar15 = *(long *)(param_1 + 0xb8);
      iVar8 = (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(lVar14);
      iVar9 = (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(lVar14);
      if (3 < uVar23) {
        memset((void *)(lVar15 + lVar25 * (ulong)((uVar23 + iVar8) - 1 & -iVar9)),0,
               (ulong)uVar23 & 0xfffffffc);
      }
      lVar25 = lVar25 + 1;
    } while (lVar25 < *(int *)(param_1 + 400));
  }
  plVar24 = (long *)PTR_DAT_04bb2698;
  uVar23 = *(uint *)(*(long *)(param_1 + 0x188) + 0x30);
  if (0 < (int)uVar23) {
    lVar25 = *(long *)PTR_DAT_04bb2698;
    __size = (ulong)uVar23 * 0x78 + 8;
    if (lVar25 == 0) {
      puVar17 = malloc(__size);
      puVar1 = PTR_DAT_04bb2020;
    }
    else {
      plVar16 = param_3;
      if (param_3 == (long *)0x0) {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar16 = (long *)(lVar25 + 8);
        if (lVar15 != 0) {
          plVar16 = (long *)(lVar15 + 0xa8);
        }
        plVar16 = (long *)*plVar16;
        if (plVar16 == (long *)0x0) goto LAB_0161bc1c;
      }
      puVar17 = (ulong *)(**(code **)(*plVar16 + 0x30))(plVar16,__size,8);
      puVar1 = PTR_DAT_04bb2020;
    }
    PTR_DAT_04bb2020 = puVar1;
    if (puVar17 != (ulong *)0x0) {
      puVar26 = puVar17 + 1;
      *puVar17 = (ulong)uVar23;
      puVar17 = puVar26;
      do {
        *puVar17 = (ulong)(puVar1 + 0x10);
        puVar17[1] = (ulong)"invalid_name";
        uVar13 = FUN_006bd550("invalid_name",0);
        *(undefined4 *)(puVar17 + 2) = uVar13;
        puVar17[5] = (ulong)(puVar17 + 4);
        puVar17[6] = 0xffffffff00000000;
        puVar17[4] = (ulong)(puVar17 + 4);
        FUN_038e18e4(puVar17 + 7);
        *(undefined4 *)((long)puVar17 + 0x34) = 8;
        puVar17 = puVar17 + 0xf;
      } while (puVar17 != puVar26 + (ulong)uVar23 * 0xf);
      *(ulong **)(param_1 + 0x18) = puVar26;
      *(uint *)(param_1 + 0x10) = uVar23;
      plVar24 = (long *)PTR_DAT_04bb2698;
    }
  }
LAB_0161bc1c:
  uVar23 = *(uint *)(*(long *)(param_1 + 0x188) + 0x30);
  uVar27 = uVar23 - 1;
  if (0 < (int)uVar23) {
    lVar25 = *plVar24;
    if (lVar25 == 0) {
      pvVar18 = malloc((long)(int)uVar23 * 0x48);
    }
    else {
      plVar24 = param_3;
      if (param_3 == (long *)0x0) {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar24 = (long *)(lVar25 + 8);
        if (lVar15 != 0) {
          plVar24 = (long *)(lVar15 + 0xa8);
        }
        plVar24 = (long *)*plVar24;
        if (plVar24 == (long *)0x0) goto LAB_0161bd08;
      }
      pvVar18 = (void *)(**(code **)(*plVar24 + 0x30))(plVar24,(long)(int)uVar23 * 0x48,8);
    }
    if (pvVar18 != (void *)0x0) {
      *(uint *)(param_1 + 0x4c) = uVar23;
      *(void **)(param_1 + 0x38) = pvVar18;
      if (1 < uVar23) {
        if (uVar27 == 1) {
          uVar29 = 0;
        }
        else {
          uVar29 = 0;
          plVar24 = (long *)((long)pvVar18 + 0x48);
          do {
            uVar29 = uVar29 + 2;
            plVar24[-9] = (long)plVar24;
            *plVar24 = (long)(plVar24 + 9);
            plVar24 = plVar24 + 0x12;
          } while (((ulong)uVar27 & 0xfffffffe) != uVar29);
        }
        if ((uVar27 & 1) != 0) {
          plVar24 = (long *)((long)pvVar18 + uVar29 * 0x48);
          *plVar24 = (long)(plVar24 + 9);
        }
      }
      *(undefined8 *)((long)pvVar18 + (long)(int)(uVar27 * 9) * 8) = 0;
      *(void **)(param_1 + 0x40) = pvVar18;
    }
  }
LAB_0161bd08:
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar29 = 0;
    plVar24 = (long *)(param_1 + 0x30);
    puVar1 = PTR_DAT_04bb4a68 + 0x10;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      plVar16 = (long *)**(undefined8 **)(*(long *)(*(long *)(param_1 + 0x188) + 0x38) + uVar29 * 8)
      ;
      (**(code **)(*plVar16 + 0x28))(&local_80,plVar16);
      (**(code **)(CONCAT44(uStack_7c,local_80) + 0x18))(&local_80);
      FUN_006bd550(CONCAT44(uStack_74,local_78),0);
      uVar22 = uVar29;
      if (*(uint *)(param_1 + 0x10) <= uVar29) {
        uVar22 = 0;
      }
      *(long **)(*(long *)(param_1 + 0x18) + uVar22 * 0x78 + 0x18) = plVar16;
      uVar22 = uVar29;
      if (*(uint *)(param_1 + 0x10) <= uVar29) {
        uVar22 = 0;
      }
      plVar28 = (long *)(*(long *)(param_1 + 0x18) + uVar22 * 0x78);
      (**(code **)(*plVar16 + 0x28))(&local_80,plVar16);
      plVar28[1] = CONCAT44(uStack_74,local_78);
      (**(code **)(*plVar28 + 0x18))(plVar28);
      uVar13 = FUN_006bd550(plVar28[1],0);
      *(undefined4 *)(plVar28 + 2) = uVar13;
      *(int *)(plVar16[0xe] + 4) = (int)uVar29;
      uVar22 = uVar29;
      if (*(uint *)(param_1 + 0x10) <= uVar29) {
        uVar22 = 0;
      }
      lVar25 = *(long *)(param_1 + 0x18) + uVar22 * 0x78;
      if (*(int *)(param_1 + 0x48) < *(int *)(param_1 + 0x4c)) {
        plVar16 = *(long **)(param_1 + 0x38);
        if (plVar16 != (long *)0x0) {
          *(long *)(param_1 + 0x38) = *plVar16;
        }
        *plVar16 = (long)puVar1;
        plVar16[4] = (long)puVar2;
        plVar16[5] = (long)"invalid_name";
        uVar13 = FUN_006bd550("invalid_name",0);
        *(undefined4 *)(plVar16 + 6) = uVar13;
        plVar16[2] = 0;
        plVar16[3] = 0;
        *plVar16 = (long)&PTR_LAB_049b3ee8;
        plVar16[1] = 0;
        plVar16[7] = lVar25;
        plVar16[8] = (long)plVar24;
        plVar16[5] = *(long *)(lVar25 + 8);
        *(undefined4 *)(plVar16 + 6) = *(undefined4 *)(lVar25 + 0x10);
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
        lVar25 = FUN_007ca12c(plVar24,*(undefined8 *)(param_1 + 0x30),plVar16);
        *(long *)(param_1 + 0x30) = lVar25;
        *(undefined8 *)(lVar25 + 0x18) = 1;
      }
      else {
        lVar15 = *plVar24;
        if (lVar15 != 0) {
          do {
            if (*(uint *)(lVar25 + 0x10) < *(uint *)(lVar15 + 0x30)) {
              plVar16 = (long *)(lVar15 + 8);
            }
            else {
              if (*(uint *)(lVar25 + 0x10) <= *(uint *)(lVar15 + 0x30)) {
                *(long *)(lVar15 + 0x38) = lVar25;
                break;
              }
              plVar16 = (long *)(lVar15 + 0x10);
            }
            lVar15 = *plVar16;
          } while (lVar15 != 0);
        }
      }
      uVar29 = uVar29 + 1;
    } while ((long)uVar29 < (long)*(int *)(param_1 + 0x10));
  }
  puVar1 = PTR_DAT_04bb2cd8;
  uVar23 = *(uint *)(param_1 + 400);
  uVar29 = (ulong)uVar23;
  if (0 < (int)uVar23) {
    uVar22 = uVar29 * 0x30 | 8;
    lVar25 = *(long *)PTR_DAT_04bb2698;
    if (lVar25 == 0) {
      puVar17 = malloc(uVar22);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar21 = (undefined8 *)(lVar25 + 8);
        if (lVar15 != 0) {
          puVar21 = (undefined8 *)(lVar15 + 0xa8);
        }
        param_3 = (long *)*puVar21;
        if (param_3 == (long *)0x0) goto LAB_0161c04c;
      }
      puVar17 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,uVar22,8);
    }
    if (puVar17 != (ulong *)0x0) {
      uVar19 = uVar29 * 0x30 - 0x30;
      puVar26 = puVar17 + 1;
      *puVar17 = uVar29;
      uVar27 = ((uint)(uVar19 / 0x30) & 0x7ffffff) + 1;
      uVar22 = (ulong)uVar27 & 7;
      puVar17 = puVar26;
      if ((uVar27 & 7) != 0) {
        puVar20 = puVar26;
        do {
          puVar17 = puVar20 + 6;
          *(undefined4 *)(puVar20 + 5) = 0;
          uVar22 = uVar22 - 1;
          puVar20[3] = 0;
          puVar20[4] = 0;
          puVar20[1] = 0;
          puVar20[2] = 0;
          puVar20 = puVar17;
        } while (uVar22 != 0);
      }
      if (0x14f < uVar19) {
        do {
          *(undefined4 *)(puVar17 + 5) = 0;
          *(undefined4 *)(puVar17 + 0xb) = 0;
          *(undefined4 *)(puVar17 + 0x11) = 0;
          *(undefined4 *)(puVar17 + 0x17) = 0;
          *(undefined4 *)(puVar17 + 0x1d) = 0;
          *(undefined4 *)(puVar17 + 0x23) = 0;
          *(undefined4 *)(puVar17 + 0x29) = 0;
          *(undefined4 *)(puVar17 + 0x2f) = 0;
          puVar17[3] = 0;
          puVar17[4] = 0;
          puVar17[1] = 0;
          puVar17[2] = 0;
          puVar17[7] = 0;
          puVar17[8] = 0;
          puVar17[9] = 0;
          puVar17[10] = 0;
          puVar17[0xd] = 0;
          puVar17[0xe] = 0;
          puVar17[0xf] = 0;
          puVar17[0x10] = 0;
          puVar17[0x13] = 0;
          puVar17[0x14] = 0;
          puVar17[0x15] = 0;
          puVar17[0x16] = 0;
          puVar17[0x1b] = 0;
          puVar17[0x1c] = 0;
          puVar17[0x19] = 0;
          puVar17[0x1a] = 0;
          puVar17[0x21] = 0;
          puVar17[0x22] = 0;
          puVar17[0x1f] = 0;
          puVar17[0x20] = 0;
          puVar17[0x27] = 0;
          puVar17[0x28] = 0;
          puVar17[0x25] = 0;
          puVar17[0x26] = 0;
          puVar17[0x2d] = 0;
          puVar17[0x2e] = 0;
          puVar17[0x2b] = 0;
          puVar17[0x2c] = 0;
          puVar17 = puVar17 + 0x30;
        } while (puVar17 != puVar26 + uVar29 * 6);
      }
      *(uint *)(param_1 + 0x20) = uVar23;
      *(ulong **)(param_1 + 0x28) = puVar26;
      goto joined_r0x0161c054;
    }
  }
LAB_0161c04c:
  uVar23 = *(uint *)(param_1 + 0x20);
  uVar29 = (ulong)uVar23;
joined_r0x0161c054:
  if (0 < (int)uVar23) {
    uVar23 = 0;
    do {
      uVar27 = uVar23;
      if ((uint)uVar29 <= uVar23) {
        uVar27 = 0;
      }
      *(uint *)(*(long *)(param_1 + 0x28) + (ulong)uVar27 * 0x30) = uVar23;
      uVar23 = uVar23 + 1;
      uVar29 = (ulong)*(uint *)(param_1 + 0x20);
    } while ((int)uVar23 < (int)*(uint *)(param_1 + 0x20));
  }
  FUN_0161c130(param_1);
  cVar3 = *(char *)(param_1 + 0xe1);
  uVar4 = *(ushort *)(param_1 + 0xe2);
  iVar8 = *(int *)(param_1 + 0xd8);
  *(bool *)(param_1 + 0xe1) = cVar3 == '\0';
  iVar11 = (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(lVar14);
  iVar12 = (**(code **)(*(long *)(param_1 + 0xa8) + 0x20))(lVar14);
  iVar9 = *(int *)(param_1 + 0xc0);
  lVar14 = 0;
  if (*(long *)(param_1 + 200) != 0) {
    lVar14 = (**(code **)puVar1)();
  }
  uVar23 = (uint)uVar4;
  if (cVar3 != '\0') {
    uVar23 = 0;
  }
  *(ulong *)(param_1 + 0xb8) = lVar14 + (ulong)(iVar9 + ((iVar8 + iVar11) - 1U & -iVar12) * uVar23);
  return;
}

