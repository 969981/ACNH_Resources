
void FUN_020b21c0(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  undefined **local_78;
  undefined ***local_70;
  undefined8 uStack_68;
  undefined **local_58 [2];
  undefined8 local_48;
  
  if (DAT_05aed670 == 0) {
    return;
  }
  if (*(long *)(DAT_05aed670 + 0x330) == 0) {
    return;
  }
  puVar9 = (undefined8 *)
           (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                     (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
  iVar8 = FUN_006bd550(*puVar9,0);
  if (iVar8 != 0x758f7eaf) {
    return;
  }
  FUN_020b2610(param_1);
  FUN_020b2a14(param_1);
  FUN_020b2dec(param_1);
  if (((DAT_05582b80 & 1) == 0) && (uVar10 = FUN_02640eb0(), (uVar10 & 1) != 0)) {
    FUN_021af5e0(&DAT_053fe348);
    FUN_021a5380(&DAT_053fe348,0,0,0,0);
    FUN_021b3c40(&DAT_053fe348);
    FUN_021b5250(&DAT_053fe348);
    FUN_0252d11c(&local_78);
    if (((byte)local_78 < 8) &&
       ((uVar10 = FUN_0252f03c(&local_78), (uVar10 & 1) == 0 &&
        (uVar10 = FUN_02530720(&local_78), (uVar10 & 1) == 0)))) {
      DAT_05454248 = 0;
    }
    else if (DAT_05454248 < 0x546) {
      DAT_05454248 = DAT_05454248 + 1;
    }
    FUN_021b7120(&DAT_053fe348);
    uVar10 = FUN_0290d828();
    if (((uVar10 & 1) == 0) && ((DAT_05ab8198 == (ushort *)0x0 || ((*DAT_05ab8198 & 1) == 0)))) {
      local_78 = (undefined **)CONCAT44(local_78._4_4_,1);
      uVar10 = FUN_021b92e0(&DAT_053fe348,&local_78,0);
      if ((uVar10 & 1) == 0) {
        local_78 = (undefined **)CONCAT44(local_78._4_4_,2);
        uVar10 = FUN_021b92e0(&DAT_053fe348,&local_78,0);
        if ((uVar10 & 1) == 0) {
          local_78 = (undefined **)CONCAT44(local_78._4_4_,3);
          FUN_021b92e0(&DAT_053fe348,&local_78,0);
        }
      }
    }
    FUN_021bb190(&DAT_053fe348);
    FUN_021bd940(&DAT_053fe348);
  }
  FUN_01e28ebc(param_1 + 0xda0);
  *(undefined1 *)(param_1 + 0x3428) = 0;
  FUN_0194a710(&local_78,0);
  local_48 = uStack_68;
  local_58[0] = local_78;
  iVar8 = (int)uStack_68;
  do {
    if (iVar8 == 5) {
LAB_020b2414:
      FUN_020b3190(param_1);
      lVar11 = DAT_053e5c10;
      if (((*(int *)(DAT_053e5c10 + 0x1a70) != 0 || *(int *)(DAT_053e5c10 + 0x1a74) != 0) ||
          *(int *)(DAT_053e5c10 + 0x1a78) != 0) || *(int *)(DAT_053e5c10 + 0x1a7c) != 0) {
        lVar12 = 0;
        lVar13 = 0;
        uVar10 = 0;
        lVar1 = DAT_053e5c10 + 0x1a70;
        do {
          uVar14 = uVar10 >> 5 & 0x7ffffff;
          uVar6 = 1 << (ulong)((uint)uVar10 & 0x1f);
          uVar7 = *(uint *)(lVar1 + uVar14 * 4);
          if ((((uVar6 & uVar7) != 0) &&
              (plVar2 = (long *)(lVar11 + lVar12),
              (*plVar2 & 0x3000000000000000) == 0x2000000000000000)) &&
             (lVar3 = lVar11 + lVar13, *(char *)(lVar3 + 0x915) == '\0')) {
            *(uint *)(lVar1 + uVar14 * 4) = uVar7 & (uVar6 ^ 0xffffffff);
            if ((*(long *)(lVar3 + 0x900) != *plVar2 || *(long *)(lVar3 + 0x908) != plVar2[1]) ||
                *(long *)(lVar3 + 0x90d) != *(long *)((long)plVar2 + 0xd)) {
              lVar4 = *plVar2;
              lVar5 = plVar2[1];
              *(undefined8 *)(lVar3 + 0x90d) = *(undefined8 *)((long)plVar2 + 0xd);
              *(long *)(lVar3 + 0x900) = lVar4;
              *(long *)(lVar3 + 0x908) = lVar5;
            }
          }
          uVar10 = uVar10 + 1;
          lVar13 = lVar13 + 0x28;
          lVar12 = lVar12 + 0x15;
        } while (uVar10 != 0x6c);
      }
      if (*(long *)(param_1 + 0x175a0) != 0) {
        FUN_02118e50();
      }
      FUN_02219944(param_1 + 0x175a8);
      FUN_03ebb268(param_1 + 0x175b8);
      if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x6efba09b) &&
         (*(char *)(param_1 + 0x19678) != '\0')) {
        iVar8 = *(int *)(param_1 + 0x1967c) + 1;
        *(int *)(param_1 + 0x1967c) = iVar8;
        if (iVar8 % 0x78 == 0) {
          local_70 = local_58;
          local_78 = &PTR_FUN_04a73238;
          fVar15 = (float)(iVar8 / 0x78) * 20.0;
          local_58[0] = (undefined **)CONCAT44(local_58[0]._4_4_,fVar15);
          if (*(int *)(param_1 + 0xb88) != 0) {
            lVar11 = (long)*(int *)(param_1 + 0xb88) << 3;
            puVar9 = *(undefined8 **)(param_1 + 0xb90);
            do {
              (*(code *)*local_78)(&local_78,*puVar9);
              lVar11 = lVar11 + -8;
              puVar9 = puVar9 + 1;
            } while (lVar11 != 0);
            fVar15 = local_58[0]._0_4_;
          }
          if (300.0 <= fVar15) {
            *(int *)(param_1 + 0x1967c) = *(int *)(param_1 + 0x1967c) + -0x78;
          }
        }
      }
      return;
    }
    lVar11 = FUN_0194b7fc(local_58);
    if ((lVar11 != 0) &&
       (uVar7 = *(int *)(lVar11 + 0x2b8) - 0x280,
       uVar7 < 7 && (1 << (ulong)(uVar7 & 0x1f) & 0x49U) != 0)) {
      *(undefined1 *)(param_1 + 0x3428) = 1;
      goto LAB_020b2414;
    }
    FUN_0194afc0(local_58);
    iVar8 = (int)local_48;
  } while( true );
}

