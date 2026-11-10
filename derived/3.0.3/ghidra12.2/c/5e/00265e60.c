
void FUN_00265e60(void)

{
  undefined4 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long *plVar19;
  undefined1 auStack_184 [16];
  char local_174 [4];
  undefined4 local_170;
  ErrorResultVariant aEStack_16c [124];
  int local_f0 [4];
  undefined4 local_e0;
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  lVar8 = FUN_0026c88c(DAT_04c603c8);
  puVar3 = PTR_DAT_04bc1510;
  if (lVar8 == 0) {
    return;
  }
  plVar9 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  if (plVar9 == (long *)0x0) {
    return;
  }
  plVar10 = (long *)FUN_002ba788(*(undefined8 *)puVar3);
  uVar12 = DAT_04c603c8;
  if (plVar10 == (long *)0x0) {
    return;
  }
  uVar6 = FUN_0026bfe0(DAT_04c603c8);
  local_68 = 0;
  local_c0 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_170 = 0;
  local_e0 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_16c,(Result *)&local_e0);
  FUN_002296c4(local_f0,&local_170);
  FUN_002b3fa8(&local_170);
  plVar19 = (long *)plVar9[4];
  if (plVar19 == plVar9 + 3) {
    uVar16 = 0;
    uVar11 = 0;
LAB_002660d0:
    uVar18 = 0;
    bVar5 = true;
  }
  else {
    uVar16 = 0;
    uVar18 = 0;
    do {
      if ((*(int *)(plVar19[2] + 0x4c) == 5) &&
         (uVar11 = FUN_00269a70(uVar12,*(undefined1 *)(plVar19[2] + 0x38)), (uVar11 & 1) != 0)) {
        FUN_00282b1c(auStack_184,lVar8,uVar6,*(undefined1 *)(plVar19[2] + 0x38),local_174);
        FUN_00229780(local_f0,auStack_184);
        if ((local_f0[0] == 0) &&
           ((local_174[0] != -3 && (local_174[0] != *(char *)(plVar19[2] + 0x38))))) {
          if ((0xe < uVar16) || (7 < ((uint)uVar18 & 0xff))) break;
          (**(code **)(*plVar10 + 0x20))(auStack_184,plVar10,plVar19[2],&local_170);
          FUN_00229780(local_f0,auStack_184);
          uVar7 = 0xffffffff;
          if (local_f0[0] == 0) {
            uVar7 = FUN_002b43f4(&local_170);
          }
          uVar11 = 0;
          uVar13 = uVar18 & 0xff;
          *(undefined4 *)((long)&local_a0 + (ulong)uVar16 * 4) = uVar7;
          uVar16 = uVar16 + 1;
          do {
            if (uVar13 == uVar11) {
              *(char *)((long)local_f0 + uVar13 + 0x10) = local_174[0];
              uVar18 = (ulong)((uint)uVar18 + 1);
              break;
            }
            lVar2 = uVar11 + 0x10;
            bVar5 = uVar11 < uVar13;
            uVar11 = uVar11 + 1;
          } while (*(char *)((long)local_f0 + lVar2) != local_174[0] && bVar5);
        }
      }
      plVar19 = (long *)plVar19[1];
    } while (plVar19 != plVar9 + 3);
    if ((0xe < uVar16) || (uVar17 = (uint)uVar18, 7 < (uVar17 & 0xff))) goto LAB_002663cc;
    bVar5 = (uVar18 & 0xff) == 0;
    uVar11 = uVar18;
    if ((uVar18 & 0xff) == 0) goto LAB_002660d0;
    uVar12 = (**(code **)(*plVar9 + 0x58))(plVar9,local_e0._0_1_);
    (**(code **)(*plVar10 + 0x20))(auStack_184,plVar10,uVar12,&local_170);
    FUN_00229780(local_f0,auStack_184);
    if (local_f0[0] == 0) {
      uVar6 = FUN_002b43f4(&local_170);
      local_c0 = CONCAT44(local_c0._4_4_,uVar6);
    }
    else {
      local_c0 = CONCAT44(local_c0._4_4_,0xffffffff);
    }
    if ((uVar17 & 0xff) != 1) {
      local_e0._1_1_ = (undefined1)((uint)local_e0 >> 8);
      uVar4 = local_e0._1_1_;
      uVar12 = (**(code **)(*plVar9 + 0x58))(plVar9,uVar4);
      (**(code **)(*plVar10 + 0x20))(auStack_184,plVar10,uVar12,&local_170);
      FUN_00229780(local_f0,auStack_184);
      if (local_f0[0] == 0) {
        uVar6 = FUN_002b43f4(&local_170);
      }
      else {
        uVar6 = 0xffffffff;
      }
      local_c0 = CONCAT44(uVar6,(undefined4)local_c0);
      if ((uVar17 & 0xff) != 2) {
        uVar12 = (**(code **)(*plVar9 + 0x58))(plVar9,local_e0._2_1_);
        (**(code **)(*plVar10 + 0x20))(auStack_184,plVar10,uVar12,&local_170);
        FUN_00229780(local_f0,auStack_184);
        if (local_f0[0] == 0) {
          uVar6 = FUN_002b43f4(&local_170);
        }
        else {
          uVar6 = 0xffffffff;
        }
        local_b8 = CONCAT44(local_b8._4_4_,uVar6);
        if ((uVar17 & 0xff) != 3) {
          uVar12 = (**(code **)(*plVar9 + 0x58))(plVar9,local_e0._3_1_);
          (**(code **)(*plVar10 + 0x20))(auStack_184,plVar10,uVar12,&local_170);
          FUN_00229780(local_f0,auStack_184);
          if (local_f0[0] == 0) {
            uVar6 = FUN_002b43f4(&local_170);
          }
          else {
            uVar6 = 0xffffffff;
          }
          local_b8 = CONCAT44(uVar6,(undefined4)local_b8);
          if ((uVar17 & 0xff) != 4) {
            uVar12 = (**(code **)(*plVar9 + 0x58))(plVar9,local_dc);
            (**(code **)(*plVar10 + 0x20))(auStack_184,plVar10,uVar12,&local_170);
            FUN_00229780(local_f0,auStack_184);
            if (local_f0[0] == 0) {
              uVar6 = FUN_002b43f4(&local_170);
            }
            else {
              uVar6 = 0xffffffff;
            }
            local_b0 = CONCAT44(local_b0._4_4_,uVar6);
            if ((uVar17 & 0xff) != 5) {
              uVar12 = (**(code **)(*plVar9 + 0x58))(plVar9,local_db);
              (**(code **)(*plVar10 + 0x20))(auStack_184,plVar10,uVar12,&local_170);
              FUN_00229780(local_f0,auStack_184);
              if (local_f0[0] == 0) {
                uVar6 = FUN_002b43f4(&local_170);
              }
              else {
                uVar6 = 0xffffffff;
              }
              local_b0 = CONCAT44(uVar6,(undefined4)local_b0);
              if ((uVar17 & 0xff) != 6) {
                uVar12 = (**(code **)(*plVar9 + 0x58))(plVar9,local_da);
                (**(code **)(*plVar10 + 0x20))(auStack_184,plVar10,uVar12,&local_170);
                FUN_00229780(local_f0,auStack_184);
                if (local_f0[0] == 0) {
                  uVar6 = FUN_002b43f4(&local_170);
                }
                else {
                  uVar6 = 0xffffffff;
                }
                local_a8 = CONCAT44(local_a8._4_4_,uVar6);
              }
            }
          }
        }
      }
    }
  }
  lVar8 = 0;
  uVar13 = (uVar11 & 0xff) + 1;
  DAT_04c5fd70 = (undefined1)uVar16;
  if ((uVar11 & 0xff) != 0) {
    puVar14 = &DAT_04c5fd18;
    puVar15 = (undefined4 *)((ulong)&local_a0 | 4);
    do {
      puVar1 = puVar15 + -1;
      uVar6 = *puVar15;
      lVar8 = lVar8 + -2;
      puVar15 = puVar15 + 2;
      puVar14[-1] = *puVar1;
      *puVar14 = uVar6;
      puVar14 = puVar14 + 2;
    } while (-lVar8 != (uVar13 & 0x1fe));
    lVar8 = -lVar8;
  }
  if ((uVar13 & 1) != 0) {
    (&DAT_04c5fd14)[lVar8] = *(undefined4 *)((long)&local_a0 + lVar8 * 4);
  }
  DAT_04c5fd71 = (undefined1)uVar18;
  if (!bVar5) {
    if (((uint)uVar18 & 0xff) == 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      puVar14 = &DAT_04c5fd54;
      puVar15 = (undefined4 *)((ulong)&local_c0 | 4);
      do {
        puVar1 = puVar15 + -1;
        uVar6 = *puVar15;
        lVar8 = lVar8 + -2;
        puVar15 = puVar15 + 2;
        puVar14[-1] = *puVar1;
        *puVar14 = uVar6;
        puVar14 = puVar14 + 2;
      } while (-lVar8 != (uVar18 & 0xfe));
      lVar8 = -lVar8;
    }
    if ((uVar18 & 1) != 0) {
      (&DAT_04c5fd50)[lVar8] = *(undefined4 *)((long)&local_c0 + lVar8 * 4);
    }
  }
LAB_002663cc:
  FUN_002b4104(&local_170);
  return;
}

