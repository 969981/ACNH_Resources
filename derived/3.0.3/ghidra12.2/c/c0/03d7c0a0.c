
void FUN_03d7c0a0(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
                 long *param_5)

{
  undefined *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  undefined1 uVar7;
  ushort *puVar8;
  uint uVar9;
  ushort uVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined **local_10a0;
  undefined2 *local_1098;
  undefined4 local_1090;
  undefined2 local_108c [1023];
  undefined2 local_88e;
  undefined **local_888;
  undefined2 *local_880;
  undefined4 local_878;
  undefined2 local_874 [1023];
  undefined2 local_76;
  undefined **local_70;
  undefined4 local_68;
  
  iVar5 = *(int *)(param_4 + 0xb5c);
  if (iVar5 < *(int *)(param_4 + 0xb34)) {
    if (iVar5 == 0) {
      plVar11 = *(long **)(param_4 + 0x250);
      (**(code **)(PTR_PTR_04c4b990 + 0x18))(&PTR_PTR_04c4b990);
      puVar1 = PTR_DAT_04c4b998;
      local_888 = &PTR_LAB_04a3ee98;
      local_880._0_4_ = 0x47;
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_888);
      (**(code **)(plVar11[3] + 0x488))(plVar11[1],puVar1);
      plVar11 = *(long **)(param_4 + 0x250);
      if (*(char *)(param_4 + 0xc78) == '\0') {
        local_888 = &PTR_LAB_04a3ee98;
        local_880._0_4_ = 0xb;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_888);
        pfVar6 = (float *)(**(code **)(plVar11[3] + 0xd0))(plVar11[1]);
        plVar11 = *(long **)(param_4 + 0x250);
        fVar12 = *pfVar6;
        local_888 = &PTR_LAB_04a3ee98;
        local_880._0_4_ = 0x36;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_888);
        iVar5 = (**(code **)(plVar11[3] + 0x380))(plVar11[1]);
        if (iVar5 == 0) {
          param_3 = -0.5;
          fVar13 = *(float *)(param_4 + 0xb4c) + *(float *)(param_4 + 0xb38) * -0.5;
        }
        else if (iVar5 == 2) {
          fVar13 = (*(float *)(param_4 + 0xb4c) + fVar12 * 0.5) - *(float *)(param_4 + 0xb38);
        }
        else {
          fVar13 = 0.0;
          if (iVar5 == 1) {
            fVar13 = *(float *)(param_4 + 0xb4c) + fVar12 * -0.5;
          }
        }
        plVar11 = *(long **)(param_4 + 600);
        local_888 = &PTR_LAB_04a3ee98;
        local_880 = (undefined2 *)CONCAT44(local_880._4_4_,0x3f);
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_888);
        fVar12 = (float)(**(code **)(plVar11[3] + 0x410))(plVar11[1]);
        fVar13 = fVar13 + (param_3 - fVar12) * 0.5;
      }
      else {
        local_888 = &PTR_LAB_04a3ee98;
        local_880._0_4_ = 0xb;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_888);
        pfVar6 = (float *)(**(code **)(plVar11[3] + 0xd0))(plVar11[1]);
        plVar11 = *(long **)(param_4 + 0x250);
        fVar12 = *pfVar6;
        local_888 = &PTR_LAB_04a3ee98;
        local_880._0_4_ = 0x36;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_888);
        iVar5 = (**(code **)(plVar11[3] + 0x380))(plVar11[1]);
        if (iVar5 == 0) {
          param_3 = -0.5;
          fVar13 = *(float *)(param_4 + 0xb4c) + *(float *)(param_4 + 0xb38) * -0.5;
        }
        else if (iVar5 == 2) {
          fVar13 = (*(float *)(param_4 + 0xb4c) + fVar12 * 0.5) - *(float *)(param_4 + 0xb38);
        }
        else {
          fVar13 = 0.0;
          if (iVar5 == 1) {
            fVar13 = *(float *)(param_4 + 0xb4c) + fVar12 * -0.5;
          }
        }
        plVar11 = *(long **)(param_4 + 600);
        local_888 = &PTR_LAB_04a3ee98;
        local_880 = (undefined2 *)CONCAT44(local_880._4_4_,0x3f);
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_888);
        fVar12 = (float)(**(code **)(plVar11[3] + 0x410))(plVar11[1]);
        fVar12 = (param_3 - fVar12) * 0.5;
        uVar9 = 0;
        if (fVar12 != (float)(int)fVar12) {
          uVar9 = (uint)(0.0 <= fVar12);
        }
        fVar13 = fVar13 + (float)(int)(uVar9 + (int)fVar12);
      }
      *(float *)(param_4 + 0xb68) = fVar13;
      uVar4 = 0;
    }
    else {
      if (*(char *)(param_4 + 0xb76) == '\0') {
        fVar13 = 0.0;
        fVar12 = 0.0;
        if (0 < iVar5) {
          local_76 = 0;
          local_878 = 0x400;
          local_1090 = 0x400;
          local_880 = local_874;
          local_1098 = local_108c;
          local_874[0] = 0;
          local_88e = 0;
          local_10a0 = (undefined **)(PTR_DAT_04bb62a0 + 0x10);
          local_108c[0] = 0;
          local_888 = local_10a0;
          FUN_03d7ca10(param_4,&local_888,iVar5 + 1);
          (*(code *)local_888[3])(&local_888);
          uVar4 = FUN_03d7d500(&local_10a0,local_880,*(undefined4 *)(param_4 + 0xb60));
          plVar11 = *(long **)(param_4 + 0x250);
          (*(code *)local_10a0[3])(&local_10a0);
          puVar2 = local_1098;
          local_70 = (undefined **)(PTR_DAT_04bc0878 + 0x10);
          local_68 = 9;
          (**(code **)(*plVar11 + 0x18))(plVar11,&local_70);
          (**(code **)(plVar11[3] + 0x5e0))(plVar11[1],puVar2,uVar4);
          plVar11 = *(long **)(param_4 + 0x250);
          local_70 = &PTR_LAB_04a3ee98;
          local_68 = 0x3f;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_70);
          fVar12 = (float)(**(code **)(plVar11[3] + 0x410))(plVar11[1]);
          fVar12 = param_3 - fVar12;
        }
        plVar11 = *(long **)(param_4 + 0x250);
        local_888 = &PTR_LAB_04a3ee98;
        local_880._0_4_ = 0xb;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_888);
        pfVar6 = (float *)(**(code **)(plVar11[3] + 0xd0))(plVar11[1]);
        plVar11 = *(long **)(param_4 + 0x250);
        fVar14 = *pfVar6;
        local_888 = &PTR_LAB_04a3ee98;
        local_880._0_4_ = 0x36;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_888);
        iVar5 = (**(code **)(plVar11[3] + 0x380))(plVar11[1]);
        if (iVar5 == 0) {
          param_3 = -0.5;
          fVar13 = *(float *)(param_4 + 0xb4c) + *(float *)(param_4 + 0xb38) * -0.5;
        }
        else if (iVar5 == 2) {
          fVar13 = (*(float *)(param_4 + 0xb4c) + fVar14 * 0.5) - *(float *)(param_4 + 0xb38);
        }
        else if (iVar5 == 1) {
          fVar13 = *(float *)(param_4 + 0xb4c) + fVar14 * -0.5;
        }
        if (*(char *)(param_4 + 0xc78) == '\0') {
          fVar14 = fVar12 * 0.5;
        }
        else {
          fVar14 = fVar12 * 0.5;
          uVar9 = 0;
          if (fVar14 != (float)(int)fVar14) {
            uVar9 = (uint)(0.0 <= fVar14);
          }
          fVar14 = (float)(int)(uVar9 + (int)fVar14);
        }
        plVar11 = *(long **)(param_4 + 600);
        local_888 = &PTR_LAB_04a3ee98;
        local_880 = (undefined2 *)CONCAT44(local_880._4_4_,0x3f);
        *(float *)(param_4 + 0xb68) = fVar13 + fVar14 + fVar12 * 0.5;
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_888);
        fVar12 = (float)(**(code **)(plVar11[3] + 0x410))(plVar11[1]);
        fVar12 = *(float *)(param_4 + 0xb68) - (param_3 - fVar12) * 0.5;
      }
      else {
        local_76 = 0;
        local_878 = 0x400;
        local_880 = local_874;
        local_874[0] = 0;
        local_888 = (undefined **)(PTR_DAT_04bb62a0 + 0x10);
        uVar4 = FUN_03d7ca10(param_4,&local_888);
        plVar11 = *(long **)(param_4 + 0x250);
        (*(code *)local_888[3])(&local_888);
        puVar2 = local_880;
        local_10a0 = (undefined **)(PTR_DAT_04bc0878 + 0x10);
        local_1098._0_4_ = 9;
        (**(code **)(*plVar11 + 0x18))(plVar11,&local_10a0);
        (**(code **)(plVar11[3] + 0x5e0))(plVar11[1],puVar2,uVar4);
        plVar11 = *(long **)(param_4 + 0x250);
        *(int *)(param_4 + 0xb60) = *(int *)(param_4 + 0xb60) + 1;
        if (*(char *)(param_4 + 0xc78) == '\0') {
          local_10a0 = &PTR_LAB_04a3ee98;
          local_1098._0_4_ = 0xb;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_10a0);
          pfVar6 = (float *)(**(code **)(plVar11[3] + 0xd0))(plVar11[1]);
          plVar11 = *(long **)(param_4 + 0x250);
          fVar13 = *pfVar6;
          local_10a0 = &PTR_LAB_04a3ee98;
          local_1098._0_4_ = 0x36;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_10a0);
          iVar5 = (**(code **)(plVar11[3] + 0x380))(plVar11[1]);
          if (iVar5 == 0) {
            param_3 = -0.5;
            fVar12 = *(float *)(param_4 + 0xb4c) + *(float *)(param_4 + 0xb38) * -0.5;
          }
          else if (iVar5 == 2) {
            fVar12 = (*(float *)(param_4 + 0xb4c) + fVar13 * 0.5) - *(float *)(param_4 + 0xb38);
          }
          else {
            fVar12 = 0.0;
            if (iVar5 == 1) {
              fVar12 = *(float *)(param_4 + 0xb4c) + fVar13 * -0.5;
            }
          }
          plVar11 = *(long **)(param_4 + 600);
          local_10a0 = &PTR_LAB_04a3ee98;
          local_1098 = (undefined2 *)CONCAT44(local_1098._4_4_,0x3f);
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_10a0);
          fVar13 = (float)(**(code **)(plVar11[3] + 0x410))(plVar11[1]);
          fVar13 = (param_3 - fVar13) * 0.5;
        }
        else {
          local_10a0 = &PTR_LAB_04a3ee98;
          local_1098._0_4_ = 0xb;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_10a0);
          pfVar6 = (float *)(**(code **)(plVar11[3] + 0xd0))(plVar11[1]);
          plVar11 = *(long **)(param_4 + 0x250);
          fVar13 = *pfVar6;
          local_10a0 = &PTR_LAB_04a3ee98;
          local_1098._0_4_ = 0x36;
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_10a0);
          iVar5 = (**(code **)(plVar11[3] + 0x380))(plVar11[1]);
          if (iVar5 == 0) {
            param_3 = -0.5;
            fVar12 = *(float *)(param_4 + 0xb4c) + *(float *)(param_4 + 0xb38) * -0.5;
          }
          else if (iVar5 == 2) {
            fVar12 = (*(float *)(param_4 + 0xb4c) + fVar13 * 0.5) - *(float *)(param_4 + 0xb38);
          }
          else {
            fVar12 = 0.0;
            if (iVar5 == 1) {
              fVar12 = *(float *)(param_4 + 0xb4c) + fVar13 * -0.5;
            }
          }
          plVar11 = *(long **)(param_4 + 600);
          local_10a0 = &PTR_LAB_04a3ee98;
          local_1098 = (undefined2 *)CONCAT44(local_1098._4_4_,0x3f);
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_10a0);
          fVar13 = (float)(**(code **)(plVar11[3] + 0x410))(plVar11[1]);
          fVar13 = (param_3 - fVar13) * 0.5;
          uVar9 = 0;
          if (fVar13 != (float)(int)fVar13) {
            uVar9 = (uint)(0.0 <= fVar13);
          }
          fVar13 = (float)(int)(uVar9 + (int)fVar13);
        }
        fVar12 = fVar12 + fVar13;
      }
      uVar4 = *(undefined4 *)(param_4 + 0xb60);
      *(float *)(param_4 + 0xb68) = fVar12;
    }
    uVar4 = FUN_03d7d280(param_4,uVar4);
    plVar11 = *(long **)(param_4 + 600);
    *(undefined4 *)(param_4 + 0xb6c) = uVar4;
    local_888 = &PTR_LAB_04a3ee98;
    local_880 = (undefined2 *)CONCAT44(local_880._4_4_,8);
    (**(code **)(*plVar11 + 0x18))(plVar11,&local_888);
    (**(code **)(plVar11[3] + 0x98))(plVar11[1],param_4 + 0xb68);
  }
  (**(code **)(*param_5 + 0x18))(param_5);
  puVar8 = (ushort *)param_5[1];
  uVar10 = *puVar8;
  if (uVar10 != 0) {
    iVar5 = 0;
    do {
      while ((uVar10 & 0xfffe) == 0xe) {
        if (uVar10 == 0xf) {
          puVar8 = puVar8 + 3;
        }
        else if (uVar10 == 0xe) {
          puVar8 = (ushort *)((long)puVar8 + (ulong)puVar8[3] + 8);
        }
        uVar10 = *puVar8;
        if (uVar10 == 0) goto LAB_03d7c9c8;
      }
      bVar3 = uVar10 == 10;
      puVar8 = puVar8 + 1;
      uVar10 = *puVar8;
      if (bVar3) {
        iVar5 = iVar5 + 1;
      }
    } while (uVar10 != 0);
LAB_03d7c9c8:
    if (0 < iVar5) {
      uVar7 = 1;
      goto LAB_03d7c9dc;
    }
  }
  uVar7 = 0;
LAB_03d7c9dc:
  *(undefined1 *)(param_4 + 0xb76) = uVar7;
  *(undefined2 *)(param_4 + 0xb78) = *(undefined2 *)(param_4 + 0xb74);
  return;
}

