
uint FUN_03ffd0a0(uint *param_1,long *param_2)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  undefined8 *puVar7;
  bool bVar8;
  uint uVar9;
  void *__s;
  int iVar10;
  ushort *puVar11;
  long lVar12;
  uint local_44;
  int local_28;
  undefined4 local_24;
  
  uVar9 = FUN_04002180(param_2,1,0,&local_28);
  if ((uVar9 & 1) == 0) goto LAB_03ffd6cc;
  iVar10 = (int)param_2[1];
  if (iVar10 == 0) {
    uVar3 = *param_1;
    if (*(char *)((long)param_2 + 0xc) == '\0') {
LAB_03ffd1d0:
      local_24 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
      uVar6 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
      local_44 = uVar6 >> 0x10 | uVar6 << 0x10;
      puVar7 = (undefined8 *)PTR_DAT_04bdf328;
      if ((int)param_2[2] != 0xff00) {
        local_44 = local_24;
      }
    }
    else {
      local_24 = CONCAT31(local_24._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_44,4);
        puVar7 = (undefined8 *)PTR_DAT_04bdf328;
      }
      else {
        if ((int)param_2[1] != 1) goto LAB_03ffd1d0;
        uVar6 = (local_44 & 0xff00ff00) >> 8 | (local_44 & 0xff00ff) << 8;
        local_24 = uVar6 >> 0x10 | uVar6 << 0x10;
        if ((int)param_2[2] != 0xff00) {
          local_24 = local_44;
        }
        (**(code **)(*param_2 + 0x38))(param_2,&local_24);
        puVar7 = (undefined8 *)PTR_DAT_04bdf328;
      }
    }
    PTR_DAT_04bdf328 = (undefined *)puVar7;
    if (local_44 == 0) {
      if (*(long *)(param_1 + 6) != 0) {
        (**(code **)(*DAT_05b059a0 + 0x18))();
        param_1[6] = 0;
        param_1[7] = 0;
      }
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[4] = 0;
      cVar4 = *(char *)((long)param_2 + 0xc);
    }
    else {
      if (local_44 == uVar3) goto LAB_03ffd340;
      if (*(long *)(param_1 + 6) != 0) {
        (**(code **)(*(long *)*puVar7 + 0x18))();
        param_1[6] = 0;
        param_1[7] = 0;
      }
      *param_1 = local_44;
      uVar3 = 1 << (ulong)(local_44 & 0x1f);
      param_1[4] = 0;
      param_1[1] = uVar3 - 1;
      param_1[2] = 0;
      __s = (void *)(**(code **)(*(long *)*puVar7 + 0x10))((long *)*puVar7,(ulong)uVar3 << 1,0);
      *(void **)(param_1 + 6) = __s;
      if (__s == (void *)0x0) {
        FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
        __s = *(void **)(param_1 + 6);
      }
      uVar3 = 0;
      if (*param_1 != 0) {
        uVar3 = 1 << (ulong)(*param_1 & 0x1f);
      }
      memset(__s,0,(ulong)uVar3 << 1);
      param_1[2] = 0;
      param_1[4] = 0;
      uVar3 = 0;
      if (*param_1 != 0) {
        uVar3 = 1 << (ulong)(*param_1 & 0x1f);
      }
      memset(*(void **)(param_1 + 6),0,(ulong)uVar3 << 1);
      *(undefined1 *)(param_1 + 3) = 1;
      cVar4 = *(char *)((long)param_2 + 0xc);
    }
  }
  else {
    if (*(char *)((long)param_2 + 0xc) != '\0') {
      local_24 = CONCAT31(local_24._1_3_,4);
      (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
      iVar10 = (int)param_2[1];
    }
    if (iVar10 == 2) {
      (**(code **)(*param_2 + 0x20))(param_2,param_1,4);
      cVar4 = *(char *)((long)param_2 + 0xc);
    }
    else if (iVar10 == 1) {
      uVar3 = *param_1;
      uVar6 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      local_24 = uVar6 >> 0x10 | uVar6 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        local_24 = uVar3;
      }
      (**(code **)(*param_2 + 0x38))(param_2,&local_24);
      cVar4 = *(char *)((long)param_2 + 0xc);
    }
    else {
      local_24 = 0;
      (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
      uVar3 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
      uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
      if ((int)param_2[2] != 0xff00) {
        uVar3 = local_24;
      }
      *param_1 = uVar3;
LAB_03ffd340:
      cVar4 = *(char *)((long)param_2 + 0xc);
    }
  }
  if (cVar4 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar1 = param_1 + 1;
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar3 = *puVar1;
    uVar6 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_24 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar3;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar3 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar3 = local_24;
    }
    *puVar1 = uVar3;
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar4 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar1 = param_1 + 2;
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else if ((int)param_2[1] == 1) {
    uVar3 = *puVar1;
    uVar6 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_24 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar3;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar3 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar3 = local_24;
    }
    *puVar1 = uVar3;
    cVar4 = *(char *)((long)param_2 + 0xc);
  }
  if (cVar4 != '\0') {
    local_24._1_3_ = (undefined3)(local_24 >> 8);
    local_24 = CONCAT31(local_24._1_3_,4);
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,1);
  }
  puVar1 = param_1 + 4;
  if ((int)param_2[1] == 2) {
    (**(code **)(*param_2 + 0x20))(param_2,puVar1,4);
    if (local_28 != 0) goto LAB_03ffd5d0;
    bVar8 = false;
  }
  else if ((int)param_2[1] == 1) {
    uVar3 = *puVar1;
    uVar6 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    local_24 = uVar6 >> 0x10 | uVar6 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      local_24 = uVar3;
    }
    (**(code **)(*param_2 + 0x38))(param_2,&local_24);
    if (local_28 == 0) {
      bVar8 = false;
    }
    else {
LAB_03ffd5d0:
      local_24 = CONCAT31(local_24._1_3_,(char)param_1[3]);
      (**(code **)(*param_2 + 0x28))(param_2,&local_24);
      bVar8 = (char)local_24 != '\0';
    }
  }
  else {
    local_24 = 0;
    (**(code **)(*param_2 + 0x20))(param_2,&local_24,4);
    uVar3 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    if ((int)param_2[2] != 0xff00) {
      uVar3 = local_24;
    }
    *puVar1 = uVar3;
    bVar8 = false;
    if (local_28 != 0) goto LAB_03ffd5d0;
  }
  uVar6 = *param_1;
  *(bool *)(param_1 + 3) = bVar8;
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = 1 << (ulong)(uVar6 & 0x1f);
  }
  if (uVar6 != 0) {
    puVar11 = *(ushort **)(param_1 + 6);
    lVar12 = (ulong)uVar3 << 1;
    do {
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,puVar11,2);
      }
      else if ((int)param_2[1] == 1) {
        uVar5 = *puVar11;
        uVar2 = uVar5 >> 8 | uVar5 << 8;
        if ((int)param_2[2] != 0xff00) {
          uVar2 = uVar5;
        }
        local_24 = CONCAT22(local_24._2_2_,uVar2);
        (**(code **)(*param_2 + 0x30))(param_2,&local_24);
      }
      else {
        local_24 = (uint)local_24._2_2_ << 0x10;
        (**(code **)(*param_2 + 0x20))(param_2,&local_24,2);
        uVar2 = (ushort)local_24 >> 8 | (ushort)local_24 << 8;
        if ((int)param_2[2] != 0xff00) {
          uVar2 = (ushort)local_24;
        }
        *puVar11 = uVar2;
      }
      puVar11 = puVar11 + 1;
      lVar12 = lVar12 + -2;
    } while (lVar12 != 0);
  }
LAB_03ffd6cc:
  return uVar9 & 1;
}

