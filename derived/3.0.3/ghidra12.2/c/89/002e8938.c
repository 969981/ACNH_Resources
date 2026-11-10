
void FUN_002e8938(undefined8 param_1,long param_2,long param_3)

{
  char cVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined4 uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  char cVar20;
  undefined8 local_174;
  undefined8 local_164;
  undefined4 local_15c;
  undefined4 local_64;
  
  plVar6 = DAT_04c611a0;
  if (DAT_04c611a0 == (long *)0x0) {
    local_174._0_4_ = 0;
    local_164 = CONCAT44(local_164._4_4_,0x10c08);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_164 + 4),(Result *)&local_174);
    puVar14 = &local_164;
    goto LAB_002e9060;
  }
  lVar11 = FUN_0022033c();
  if ((lVar11 != 0) && (*(char *)(lVar11 + 0x599) == '\0')) {
    uVar10 = snprintf((char *)&local_164,0x100,"%08x",(ulong)*(uint *)(plVar6 + 1));
    if (uVar10 < 0x100) {
      *(undefined1 *)((long)&local_164 + (ulong)uVar10) = 0;
    }
    FUN_0022034c(&local_174,lVar11,&local_164);
  }
  puVar5 = PTR_DAT_04bcd350;
  FUN_0026a5c4(&local_164,*(undefined8 *)PTR_DAT_04bcd350);
  iVar15 = (int)local_164;
  FUN_0026a5c4(&local_164,*(undefined8 *)puVar5);
  iVar7 = (int)local_164;
  cVar20 = '\x01';
  if (iVar15 == 0) {
    cVar20 = '\x02';
  }
  if ((int)local_164 != 0) {
    cVar20 = iVar15 == 0;
  }
  FUN_0026a5c4(&local_164,*(undefined8 *)puVar5);
  iVar8 = (int)local_164;
  if ((int)local_164 == 0) {
    cVar20 = cVar20 + '\x01';
  }
  FUN_0026a5c4(&local_164,*(undefined8 *)puVar5);
  iVar9 = (int)local_164;
  *(undefined2 *)(param_2 + 0x228) = 0;
  if ((int)local_164 == 0) {
    cVar20 = cVar20 + '\x01';
  }
  lVar11 = param_2 + 8;
  FUN_03875e50(lVar11);
  *(undefined8 *)(param_2 + 0x2a0) = 0;
  *(undefined1 *)(param_2 + 0x78) = 0xff;
  *(undefined8 *)(param_2 + 0x278) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  FUN_03875e50(param_2 + 0x90);
  *(undefined1 *)(param_2 + 0x100) = 0xff;
  *(undefined8 *)(param_2 + 0x2a8) = 0;
  *(undefined8 *)(param_2 + 0x280) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined8 *)(param_2 + 0x110) = 0;
  FUN_03875e50(param_2 + 0x118);
  *(undefined1 *)(param_2 + 0x188) = 0xff;
  *(undefined8 *)(param_2 + 0x2b0) = 0;
  *(undefined8 *)(param_2 + 0x288) = 0;
  *(undefined8 *)(param_2 + 400) = 0;
  *(undefined8 *)(param_2 + 0x198) = 0;
  FUN_03875e50(param_2 + 0x1a0);
  uVar17 = (ulong)*(byte *)(param_2 + 0x228);
  *(undefined1 *)(param_2 + 0x210) = 0xff;
  *(undefined8 *)(param_2 + 0x218) = 0;
  *(undefined8 *)(param_2 + 0x220) = 0;
  *(undefined8 *)(param_2 + 0x2b8) = 0;
  *(undefined8 *)(param_2 + 0x290) = 0;
  if (iVar15 == 0) {
    *(undefined1 *)(param_2 + 0x229) = 1;
    lVar18 = lVar11 + uVar17 * 0x88;
    lVar2 = param_3 + uVar17 * 0x88;
    FUN_00227af0(&local_164,lVar18,lVar2 + 0x18);
    bVar3 = *(byte *)(param_2 + 0x228);
    local_164 = 0x2000000000000;
    local_15c = 0;
    *(undefined1 *)(lVar18 + 0x70) = *(undefined1 *)(lVar2 + 0x88);
    uVar13 = *(undefined8 *)(lVar2 + 0x98);
    *(undefined8 *)(lVar18 + 0x78) = *(undefined8 *)(lVar2 + 0x90);
    *(undefined8 *)(lVar18 + 0x80) = uVar13;
    FUN_002282e8(lVar11 + (ulong)bVar3 * 0x88,&local_164);
    uVar10 = *(byte *)(param_2 + 0x228) + 1;
    uVar17 = (ulong)uVar10;
    *(char *)(param_2 + 0x228) = (char)uVar10;
    if (iVar7 != 0) goto LAB_002e8ad0;
LAB_002e8b78:
    *(undefined1 *)(param_2 + 0x229) = 1;
    lVar18 = ((uVar17 & 0xff) + (uVar17 & 0xff) * 0x10) * 8;
    lVar11 = param_2 + 8 + lVar18;
    lVar18 = param_3 + lVar18;
    FUN_00227af0(&local_164,lVar11,lVar18 + 0x18);
    bVar3 = *(byte *)(param_2 + 0x228);
    local_164 = 0x2000000000000;
    local_15c = 0;
    *(undefined1 *)(lVar11 + 0x70) = *(undefined1 *)(lVar18 + 0x88);
    uVar13 = *(undefined8 *)(lVar18 + 0x98);
    *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(lVar18 + 0x90);
    *(undefined8 *)(lVar11 + 0x80) = uVar13;
    FUN_002282e8(param_2 + 8 + (ulong)bVar3 * 0x88,&local_164);
    uVar10 = *(byte *)(param_2 + 0x228) + 1;
    uVar17 = (ulong)uVar10;
    *(char *)(param_2 + 0x228) = (char)uVar10;
    if (iVar8 != 0) goto LAB_002e8ad4;
LAB_002e8be8:
    *(undefined1 *)(param_2 + 0x229) = 1;
    lVar18 = ((uVar17 & 0xff) + (uVar17 & 0xff) * 0x10) * 8;
    lVar11 = param_2 + 8 + lVar18;
    lVar18 = param_3 + lVar18;
    FUN_00227af0(&local_164,lVar11,lVar18 + 0x18);
    bVar3 = *(byte *)(param_2 + 0x228);
    local_164 = 0x2000000000000;
    local_15c = 0;
    *(undefined1 *)(lVar11 + 0x70) = *(undefined1 *)(lVar18 + 0x88);
    uVar13 = *(undefined8 *)(lVar18 + 0x98);
    *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(lVar18 + 0x90);
    *(undefined8 *)(lVar11 + 0x80) = uVar13;
    FUN_002282e8(param_2 + 8 + (ulong)bVar3 * 0x88,&local_164);
    uVar10 = *(byte *)(param_2 + 0x228) + 1;
    uVar17 = (ulong)uVar10;
    *(char *)(param_2 + 0x228) = (char)uVar10;
    if (iVar9 != 0) goto LAB_002e8ad8;
LAB_002e8c58:
    *(undefined1 *)(param_2 + 0x229) = 1;
    lVar18 = ((uVar17 & 0xff) + (uVar17 & 0xff) * 0x10) * 8;
    lVar11 = param_2 + 8 + lVar18;
    lVar18 = param_3 + lVar18;
    FUN_00227af0(&local_164,lVar11,lVar18 + 0x18);
    bVar3 = *(byte *)(param_2 + 0x228);
    local_164 = 0x2000000000000;
    local_15c = 0;
    *(undefined1 *)(lVar11 + 0x70) = *(undefined1 *)(lVar18 + 0x88);
    uVar13 = *(undefined8 *)(lVar18 + 0x98);
    *(undefined8 *)(lVar11 + 0x78) = *(undefined8 *)(lVar18 + 0x90);
    *(undefined8 *)(lVar11 + 0x80) = uVar13;
    FUN_002282e8(param_2 + 8 + (ulong)bVar3 * 0x88,&local_164);
    cVar1 = *(char *)(param_2 + 0x228) + '\x01';
    *(char *)(param_2 + 0x228) = cVar1;
    if (cVar1 != '\0') goto LAB_002e8d1c;
LAB_002e8ccc:
    if ((*(char *)(param_3 + 0x261) == '\0') ||
       (uVar17 = FUN_0026c5c8(*(undefined8 *)puVar5), (uVar17 & 1) == 0)) {
      *(undefined1 *)(param_2 + 0x228) = 1;
      goto LAB_002e8d1c;
    }
    FUN_0026c78c(*(undefined8 *)puVar5,param_3 + 0x18);
    FUN_0026c78c(*(undefined8 *)puVar5,param_3 + 0xa0);
    FUN_0026c78c(*(undefined8 *)puVar5,param_3 + 0x128);
    FUN_0026c78c(*(undefined8 *)puVar5,param_3 + 0x1b0);
    goto LAB_002e9038;
  }
  if (iVar7 == 0) goto LAB_002e8b78;
LAB_002e8ad0:
  if (iVar8 == 0) goto LAB_002e8be8;
LAB_002e8ad4:
  if (iVar9 == 0) goto LAB_002e8c58;
LAB_002e8ad8:
  if ((uVar17 & 0xff) == 0) goto LAB_002e8ccc;
LAB_002e8d1c:
  *(undefined1 *)(param_2 + 0x22a) = *(undefined1 *)(param_3 + 0x238);
  *(undefined1 *)(param_2 + 0x238) = *(undefined1 *)(param_3 + 0x260);
  *(undefined4 *)(param_2 + 0x23c) = 1;
  *(undefined1 *)(param_2 + 0x274) = *(undefined1 *)(param_3 + 0x261);
  lVar11 = plVar6[10];
  *(long *)(param_2 + 0x298) = lVar11;
  if (lVar11 == 0) {
    uVar16 = 0x10c08;
  }
  else {
    FUN_002c2138(plVar6,&LAB_002e9090);
    *(undefined1 *)(param_2 + 0x2c0) = 0xff;
    if (*(char *)(param_2 + 0x22a) == '\0') {
      *(long **)(param_2 + 0x2a0) = *(long **)(param_2 + 0x298);
      uVar13 = (**(code **)(**(long **)(param_2 + 0x298) + 0x18))();
      uVar19 = 0;
      *(undefined8 *)(param_2 + 0x278) = uVar13;
LAB_002e8df8:
      *(char *)(param_2 + 0x2c0) = (char)uVar19;
LAB_002e8dfc:
      local_164 = (ulong)local_164._4_4_ << 0x20;
      local_174._0_4_ = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_164 + 4),(Result *)&local_174);
      puVar5 = PTR_DAT_04bcb8b8;
      FUN_002d4480(&local_174,
                   *(undefined8 *)
                    (*(long *)PTR_DAT_04bcb8b8 +
                     (ulong)*(byte *)(*(long *)PTR_DAT_04bcb8b8 + 0x162) * 8 + 0x168));
      FUN_00229780(&local_164,&local_174);
      if ((int)local_164 == 0) {
        if (*(long *)(*(long *)puVar5 + (ulong)(*(char *)(*(long *)puVar5 + 0x162) == '\0') * 8 +
                     0x168) == 0) {
LAB_002e8ee4:
          (**(code **)(**(long **)(param_2 + 0x298) + 0x20))
                    (*(long **)(param_2 + 0x298),*(undefined8 *)(param_2 + 0x2c8));
          uVar17 = (**(code **)(*plVar6 + 0x58))(plVar6);
          if ((uVar17 & 1) != 0) {
            DAT_04c5fc60 = (undefined2)*(undefined4 *)(param_2 + 0x250);
            DAT_04c5fcf3 = *(undefined1 *)(param_2 + 0x22a);
            DAT_04c5fcf2 = cVar20;
          }
          FUN_00297198(param_1,param_2,param_3);
          return;
        }
        FUN_002d4480(&local_174);
        FUN_00229780(&local_164,&local_174);
        if ((int)local_164 == 0) goto LAB_002e8ee4;
      }
      local_174._0_4_ = 0x10c08;
      local_64 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_174 + 4),(Result *)&local_64);
      puVar14 = &local_174;
      goto LAB_002e9060;
    }
    if (*(char *)(param_2 + 0x228) == '\x01') {
      plVar12 = *(long **)(param_2 + 0x298);
      uVar10 = 2;
      if (iVar8 != 0) {
        uVar10 = (uint)(iVar7 == 0);
      }
      uVar19 = 3;
      if (iVar9 != 0) {
        uVar19 = uVar10;
      }
      lVar11 = *(long *)(param_3 + (ulong)uVar19 * 8 + 0x240);
      if ((lVar11 == 0) || (plVar12 == *(long **)(lVar11 + 0x208))) {
        lVar11 = param_2 + (ulong)uVar19 * 8;
        *(long **)(lVar11 + 0x2a0) = plVar12;
        uVar13 = (**(code **)(*plVar12 + 0x18))();
        *(undefined8 *)(lVar11 + 0x278) = uVar13;
        goto LAB_002e8df8;
      }
    }
    else {
      lVar11 = *(long *)(param_3 + 0x240);
      if (lVar11 == 0) {
        plVar12 = *(long **)(param_2 + 0x298);
      }
      else if ((*(long *)(lVar11 + 0xc0) == 0) ||
              (plVar12 = *(long **)(param_2 + 0x298), plVar12 != *(long **)(lVar11 + 0x208)))
      goto LAB_002e9038;
      *(long **)(param_2 + 0x2a0) = plVar12;
      uVar13 = (**(code **)(*plVar12 + 0x18))();
      *(undefined8 *)(param_2 + 0x278) = uVar13;
      *(undefined1 *)(param_2 + 0x2c0) = 0;
      lVar11 = *(long *)(param_3 + 0x248);
      if (iVar7 == 0) {
        if (lVar11 == 0) {
          bVar4 = true;
        }
        else {
          if (*(long *)(lVar11 + 0xc0) == 0) goto LAB_002e9038;
          plVar12 = *(long **)(lVar11 + 0x208);
          *(long **)(param_2 + 0x2a8) = plVar12;
          uVar13 = (**(code **)(*plVar12 + 0x18))();
          bVar4 = false;
          *(undefined8 *)(param_2 + 0x280) = uVar13;
          lVar11 = 1;
        }
      }
      else {
        if (lVar11 != 0) goto LAB_002e9038;
        bVar4 = false;
      }
      iVar15 = (int)lVar11;
      lVar11 = *(long *)(param_3 + 0x250);
      if (iVar8 == 0) {
        if (lVar11 == 0) {
          bVar4 = true;
        }
        else {
          if (*(long *)(lVar11 + 0xc0) == 0) goto LAB_002e9038;
          plVar12 = *(long **)(lVar11 + 0x208);
          *(long **)(param_2 + 0x2b0) = plVar12;
          uVar13 = (**(code **)(*plVar12 + 0x18))();
          *(undefined8 *)(param_2 + 0x288) = uVar13;
          iVar15 = 1;
        }
      }
      else if (lVar11 != 0) goto LAB_002e9038;
      lVar11 = *(long *)(param_3 + 600);
      if (iVar9 == 0) {
        if (lVar11 == 0) {
          bVar4 = true;
        }
        else {
          if (*(long *)(lVar11 + 0xc0) == 0) goto LAB_002e9038;
          plVar12 = *(long **)(lVar11 + 0x208);
          *(long **)(param_2 + 0x2b8) = plVar12;
          uVar13 = (**(code **)(*plVar12 + 0x18))();
          *(undefined8 *)(param_2 + 0x290) = uVar13;
          iVar15 = 1;
        }
      }
      else if (lVar11 != 0) goto LAB_002e9038;
      if (((!bVar4) || (iVar15 == 0)) && (*(char *)(param_2 + 0x2c0) != -1)) goto LAB_002e8dfc;
    }
LAB_002e9038:
    uVar16 = 0x10c07;
  }
  local_164 = CONCAT44(local_164._4_4_,uVar16);
  local_174._0_4_ = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_164 + 4),(Result *)&local_174);
  puVar14 = &local_164;
LAB_002e9060:
  FUN_002296c4(param_1,puVar14);
  return;
}

