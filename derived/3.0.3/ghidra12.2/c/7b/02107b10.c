
void FUN_02107b10(undefined8 *param_1,char *param_2)

{
  uint *puVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  byte bVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  undefined **local_78;
  undefined8 local_70;
  undefined8 *local_68;
  int local_60;
  byte local_58 [4];
  int local_54;
  undefined8 local_38;
  
  sVar4 = *(short *)(param_1 + 1);
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  puVar5 = PTR_DAT_04bb43c0;
  local_38 = *param_1;
  if (((uint)local_38 & 0xffff) == 0xfffe) {
    local_54 = (int)*(char *)((long)param_1 + 0xb);
  }
  else {
    local_68 = (undefined8 *)0x0;
    local_78 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    lVar13 = *(long *)PTR_DAT_04bb43c0;
    local_70 = local_38;
    uVar6 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar5 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_38);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
          puVar8 = *(undefined8 **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8);
          if (puVar8 != (undefined8 *)0x0) {
            local_68 = puVar8;
          }
        }
      }
    }
    local_54 = FUN_01ae1100(&local_78);
  }
  lVar13 = *DAT_0537d558;
  bVar11 = *(byte *)(lVar13 + 0x473);
  pcVar12 = PTR_DAT_04bc1220;
  if ((long)(char)bVar11 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
    if (7 < bVar11) {
      puVar1 = (uint *)(lVar13 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pcVar12 = (char *)(lVar13 + 0x473);
    }
  }
  if (sVar4 != -1) {
    bVar11 = *(byte *)((long)param_1 + 10);
    cVar2 = *pcVar12;
    cVar3 = *param_2;
    lVar13 = FUN_0265c3e0((int)sVar4);
    if (lVar13 != 0) {
      if (7 < bVar11) {
        bVar11 = 0xff;
      }
      uVar6 = 1;
      local_58[0] = bVar11;
      lVar7 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_58,1);
      if (*(long *)(lVar13 + 0x28) != 0) {
        puVar8 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 0x10);
        if (puVar8 == (undefined8 *)0x0) {
          uVar6 = 1;
        }
        else {
          uVar6 = (**(code **)*puVar8)();
          uVar6 = uVar6 ^ 1;
        }
      }
      lVar14 = 0;
      if (lVar7 != 0) {
        if ((*(long **)(lVar7 + 0x17f68) == (long *)0x0) ||
           (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x17f68), puVar8 == (undefined8 *)0x0)) {
          lVar14 = *(long *)(lVar7 + 0x17f50) + *(long *)(lVar7 + 0x17f48);
        }
        else {
          uVar9 = (**(code **)*puVar8)();
          lVar14 = *(long *)(lVar7 + 0x17f50) + *(long *)(lVar7 + 0x17f48);
          if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x17f68) != 0)) &&
             (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x17f68) + 8), puVar8 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar8)();
          }
        }
      }
      lVar7 = DAT_053e0208;
      if (local_54 == 1) {
        if ((*(long *)(lVar13 + 0x28) != 0) &&
           (plVar10 = *(long **)(*(long *)(lVar13 + 0x28) + 0x20), plVar10 != (long *)0x0)) {
          local_78 = *(undefined ***)(lVar13 + 8);
          local_70 = *(undefined8 *)(lVar13 + 0x10);
          local_68 = (undefined8 *)0x13230;
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
        }
        FUN_026934e8(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8),&local_38,lVar14,0,0,0,1,
                     cVar3 == cVar2);
      }
      else if (local_54 == 2) {
        if ((*(long *)(lVar13 + 0x28) != 0) &&
           (plVar10 = *(long **)(*(long *)(lVar13 + 0x28) + 0x20), plVar10 != (long *)0x0)) {
          local_78 = *(undefined ***)(lVar13 + 8);
          local_70 = *(undefined8 *)(lVar13 + 0x10);
          local_68 = (undefined8 *)0x13230;
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
        }
        FUN_0269296c(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8),&local_38,lVar14,0,0,0,1,
                     cVar3 == cVar2);
      }
      else if (local_54 == 5) {
        if ((*(long *)(lVar13 + 0x28) != 0) &&
           (plVar10 = *(long **)(*(long *)(lVar13 + 0x28) + 0x20), plVar10 != (long *)0x0)) {
          local_78 = *(undefined ***)(lVar13 + 8);
          local_70 = *(undefined8 *)(lVar13 + 0x10);
          local_68 = (undefined8 *)0x13230;
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
        }
        FUN_0268e6d0(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8),&local_38,lVar14,0,0,0,1,
                     cVar3 == cVar2);
      }
      if (lVar7 != 0) {
        local_78 = &PTR_FUN_04a74838;
        local_68 = &local_38;
        uVar9 = (ulong)local_70 >> 0x20;
        local_70 = CONCAT44((int)uVar9,(int)sVar4);
        local_60 = local_54;
        if (*(int *)(lVar7 + 0xb88) != 0) {
          lVar14 = (long)*(int *)(lVar7 + 0xb88) << 3;
          puVar8 = *(undefined8 **)(lVar7 + 0xb90);
          do {
            (*(code *)*local_78)(&local_78,*puVar8);
            lVar14 = lVar14 + -8;
            puVar8 = puVar8 + 1;
          } while (lVar14 != 0);
        }
      }
      if ((((uVar6 & 1) == 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 0x18), puVar8 != (undefined8 *)0x0))
      {
        (**(code **)*puVar8)();
      }
    }
  }
  return;
}

