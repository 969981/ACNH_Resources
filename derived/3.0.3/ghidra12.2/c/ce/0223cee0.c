
void FUN_0223cee0(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long *plVar10;
  bool bVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  long lVar16;
  void *__src;
  long *plVar17;
  undefined *local_f0;
  long **pplStack_e8;
  undefined8 local_e0;
  long local_d8;
  long *local_d0 [16];
  
  local_e0 = (long **)CONCAT44(local_e0._4_4_,4);
  plVar5 = (long *)FUN_00818af8(*(undefined8 *)PTR_DAT_04bb2110,&local_e0,0x14f000,2);
  *(long **)(param_1 + 0x508) = plVar5;
  *(int *)(param_1 + 0x500) = param_2;
  lVar16 = DAT_05ae7600;
  puVar3 = PTR_DAT_04bb2698;
  if (param_2 != 1) {
    if (param_2 != 0) {
      uVar12 = 3;
      goto LAB_0223d4a0;
    }
    lVar16 = *(long *)PTR_DAT_04bb2698;
    if (lVar16 == 0) {
      pvVar8 = malloc(0x23000);
      *(void **)(param_1 + 0x520) = pvVar8;
LAB_0223d05c:
      pvVar8 = malloc(0x19000);
    }
    else {
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar16 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        uVar7 = 0;
        if (plVar5 != (long *)0x0) goto LAB_0223cf88;
      }
      else {
LAB_0223cf88:
        uVar7 = (**(code **)(*plVar5 + 0x30))(plVar5,0x23000,8);
      }
      lVar16 = *(long *)puVar3;
      *(undefined8 *)(param_1 + 0x520) = uVar7;
      if (lVar16 == 0) goto LAB_0223d05c;
      plVar5 = *(long **)(param_1 + 0x508);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar16 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        pvVar8 = (void *)0x0;
        if (plVar5 != (long *)0x0) goto LAB_0223cfdc;
      }
      else {
LAB_0223cfdc:
        pvVar8 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x19000,0x10);
      }
    }
    lVar16 = *(long *)puVar3;
    *(void **)(param_1 + 0x530) = pvVar8;
    if (lVar16 == 0) {
      puVar9 = malloc(0xa0);
    }
    else {
      plVar5 = *(long **)(param_1 + 0x508);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar16 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
      }
      puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0xa0,8);
    }
    puVar9[8] = 0;
    puVar9[9] = 0;
    *(undefined4 *)(puVar9 + 10) = 0xffffffff;
    puVar9[0x11] = 0;
    puVar9[0x12] = "agl::TextureData";
    puVar9[6] = 0;
    puVar9[7] = 0;
    *(undefined4 *)(puVar9 + 0x13) = 0x10000;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[0xb] = 0;
    puVar9[0xc] = 0;
    puVar9[0xd] = 0;
    puVar9[0xe] = 0;
    puVar9[0xf] = 0;
    puVar9[0x10] = 0;
    plVar5 = *(long **)(param_1 + 0x508);
    *(undefined8 **)(param_1 + 0x510) = puVar9;
    FUN_0390a734(puVar9,1,0x1d,500,500,1,1,1,0,1);
    lVar16 = *(long *)puVar3;
    *(char **)(*(long *)(param_1 + 0x510) + 0x90) = "PassportPhoto";
    uVar12 = *(undefined4 *)(*(long *)(param_1 + 0x510) + 0x3c);
    iVar13 = *(int *)(*(long *)(param_1 + 0x510) + 0x40);
    if (lVar16 == 0) {
      plVar10 = malloc(0x38);
    }
    else {
      plVar10 = plVar5;
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar9 = (undefined8 *)(lVar16 + 8);
        if (lVar6 != 0) {
          puVar9 = (undefined8 *)(lVar6 + 0xa8);
        }
        plVar10 = (long *)*puVar9;
      }
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x38,8);
    }
    plVar10[6] = 0;
    plVar17 = plVar10 + 1;
    *plVar17 = 0;
    *(undefined2 *)((long)plVar10 + 0x2a) = 0;
    bVar4 = 0;
    plVar10[2] = 0;
    plVar10[3] = 0;
    plVar10[4] = 0;
    puVar1 = PTR_DAT_04bb2cc8 + 0x10;
    *(undefined1 *)(plVar10 + 5) = 0;
    *plVar10 = (long)puVar1;
    if (plVar5 == (long *)0x0) {
      lVar6 = *(long *)puVar3;
      lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar9 = (undefined8 *)(lVar6 + 8);
      if (lVar16 != 0) {
        puVar9 = (undefined8 *)(lVar16 + 0xa8);
      }
      plVar5 = (long *)*puVar9;
      bVar4 = *(byte *)(plVar10 + 5) & 0xfe;
    }
    plVar10[6] = 0;
    *(byte *)(plVar10 + 5) = bVar4;
    *(undefined2 *)((long)plVar10 + 0x2a) = 0;
    *plVar17 = 0;
    plVar10[2] = 0;
    plVar10[3] = 0;
    plVar10[4] = 0;
    if (iVar13 == 0) {
      iVar13 = 0;
      *(undefined2 *)((long)plVar10 + 0x2a) = 8;
      local_d8 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar10,plVar5,iVar13,uVar12,8);
      local_d8 = plVar10[3];
      *(undefined2 *)((long)plVar10 + 0x2a) = 8;
      iVar13 = 0;
      if (plVar10[4] != 0) {
        iVar13 = (int)*plVar17 - *(int *)(plVar10[4] + 0x10);
      }
      if (local_d8 != 0) {
        iVar14 = *(int *)(local_d8 + 0x104);
        goto LAB_0223d39c;
      }
    }
    iVar14 = 0;
LAB_0223d39c:
    piVar15 = *(int **)(param_1 + 0x510);
    *piVar15 = iVar13;
    piVar15[1] = iVar14;
    *(long *)(piVar15 + 2) = local_d8;
    *(long **)(piVar15 + 4) = plVar10;
    if ((*(byte *)((long)piVar15 + 0x4e) >> 1 & 1) == 0) {
      bVar11 = false;
    }
    else {
      bVar11 = 0x11 < *(ushort *)(piVar15 + 0x26) && *(ushort *)(piVar15 + 0x26) - 0x59 < 0xffffffd6
      ;
    }
    local_e0 = (long **)CONCAT44(iVar14,iVar13);
    local_d0[0] = plVar10;
    FUN_038fd3e0(piVar15 + 0x14,&local_e0,piVar15 + 0xc,0,*(undefined8 *)(piVar15 + 0x24),bVar11,1);
    FUN_03f45838(param_1 + 0x580);
    *(undefined4 *)(param_1 + 0x518) = 1;
    return;
  }
  if (DAT_05ae7600 == 0) {
    puVar9 = malloc(0xa0);
  }
  else {
    if (plVar5 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar16 + 8);
      if (lVar6 != 0) {
        plVar5 = (long *)(lVar6 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    puVar9 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0xa0,8);
  }
  puVar9[8] = 0;
  puVar9[9] = 0;
  *(undefined4 *)(puVar9 + 10) = 0xffffffff;
  puVar9[0x11] = 0;
  puVar9[0x12] = "agl::TextureData";
  *(undefined4 *)(puVar9 + 0x13) = 0x10000;
  puVar9[6] = 0;
  puVar9[7] = 0;
  puVar9[4] = 0;
  puVar9[5] = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  *puVar9 = 0;
  puVar9[1] = 0;
  puVar9[0xb] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0;
  puVar9[0xe] = 0;
  lVar16 = *(long *)PTR_DAT_04bb2230;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0;
  *(undefined8 **)(param_1 + 0x510) = puVar9;
  if (lVar16 == 0) {
    lVar16 = 0;
    if (cRam0000000000000078 != '\0') goto LAB_0223d11c;
LAB_0223d224:
    bVar4 = 1;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x28);
    if (*(char *)(lVar16 + 0x78) == '\0') goto LAB_0223d224;
LAB_0223d11c:
    bVar4 = (**(code **)(*(long *)(lVar16 + 0x70) + 0x18))((long *)(lVar16 + 0x70));
    *(undefined1 *)(lVar16 + 0x78) = 0;
  }
  plVar5 = (long *)(lVar16 + 0x88);
  *(byte *)(lVar16 + 0x79) = bVar4 & 1;
  pvVar8 = *(void **)(param_1 + 0x5a8);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  __src = *(void **)(lVar16 + 0x90);
  if (pvVar8 != __src) {
    (**(code **)(*(long *)(lVar16 + 0x88) + 0x18))(plVar5);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(lVar16 + 0x90) + lVar6) == '\0') goto LAB_0223d414;
      lVar2 = *(long *)(lVar16 + 0x90) + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0223d414;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0223d414;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0223d414:
    iVar13 = (int)lVar6;
    if (*(int *)(param_1 + 0x5b0) <= (int)lVar6) {
      iVar13 = *(int *)(param_1 + 0x5b0) + -1;
    }
    memcpy(pvVar8,__src,(long)iVar13);
    *(undefined1 *)((long)pvVar8 + (long)iVar13) = 0;
  }
  local_d0[0] = (long *)((ulong)local_d0[0] & 0xffffffffffffff00);
  local_e0 = local_d0;
  local_d8 = 0x8000000000;
  (**(code **)(*(long *)(param_1 + 0x5a0) + 0x18))(param_1 + 0x5a0);
  FUN_038d16fc(&local_e0,"Layout_NpcIcon_%s",*(undefined8 *)(param_1 + 0x5a8));
  local_f0 = PTR_DAT_04bb2020 + 0x10;
  pplStack_e8 = local_e0;
  FUN_0074fad0(*(undefined8 *)(param_1 + 0x78),0,&local_f0,2);
  uVar12 = 1;
LAB_0223d4a0:
  *(undefined4 *)(param_1 + 0x518) = uVar12;
  return;
}

