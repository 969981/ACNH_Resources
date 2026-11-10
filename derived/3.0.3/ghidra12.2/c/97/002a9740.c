
void FUN_002a9740(long *param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  long *plVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  ulong local_1a0;
  uint local_194 [4];
  undefined1 uStack_181;
  undefined4 local_180;
  int local_17c;
  int local_178 [2];
  uint *local_170;
  undefined4 local_168;
  long *local_160;
  undefined4 local_158;
  int local_74;
  undefined8 local_70;
  undefined4 local_68;
  
  if ((int)param_1[0x125] != 0) {
    return;
  }
  FUN_002a9d30(&local_74);
  if (local_74 != 0) {
    sprintf((char *)local_178,"%08x");
  }
  FUN_002aa740(&local_17c,(long)param_1 + 0x93c,&local_74,param_2);
  if (local_17c != 0) {
    sprintf((char *)local_178,"%08x");
    local_180 = 0x8000000;
    local_1a0 = local_1a0 & 0xffffff0000000000;
    lVar9 = (**(code **)(*param_1 + 0x80))(param_1,&local_180,&local_17c,0,&local_1a0);
    if (lVar9 != 0) {
      if ((int)param_1[0x125] == 0) {
        local_70 = CONCAT44(local_70._4_4_,0x10c08);
      }
      else {
        FUN_002ac290(param_1 + 6,&uStack_181);
        local_70 = local_70 & 0xffffffff00000000;
      }
      local_194[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_70 + 4),(Result *)local_194);
      FUN_002296c4(local_194,&local_70);
      FUN_002aa740(&local_70,(long)param_1 + 0x93c,&local_17c,param_2);
    }
  }
  iVar12 = *(int *)((long)param_1 + 0xc);
  if (iVar12 == 1) {
    local_160 = param_1 + 2;
    local_158 = 0x10;
    local_178[0] = iVar12;
    lVar9 = FUN_002a9208(param_1[5],0);
    plVar6 = (long *)PTR_DAT_04bc1510;
  }
  else {
    if (iVar12 == 0) {
      local_178[0] = 0;
    }
    lVar9 = FUN_002a9208(param_1[5],0);
    plVar6 = (long *)PTR_DAT_04bc1510;
  }
  PTR_DAT_04bc1510 = (undefined *)plVar6;
  if (lVar9 != 0) {
    iVar12 = 0;
    do {
      local_194[0] = local_194[0] & 0xffff0000;
      local_1a0 = local_1a0 & 0xffffffffffff0000;
      plVar10 = (long *)FUN_002ba58c(*plVar6);
      uVar11 = FUN_002a9208(param_1[5],iVar12);
      (**(code **)(*plVar10 + 0x20))(plVar10,uVar11,local_194,&local_1a0);
      lVar9 = FUN_002a9208(param_1[5],iVar12);
      cVar4 = *(char *)(lVar9 + 0x62a);
      lVar9 = FUN_002a9208(param_1[5],iVar12);
      uVar3 = *(uint *)(lVar9 + 0x5f8);
      bVar5 = *(byte *)(lVar9 + 0x1a);
      uVar1 = bVar5 + 0x20;
      if (cVar4 == '\0') {
        iVar13 = (uVar3 - 0x20) + ~(uint)bVar5;
        uVar7 = FUN_00222118(local_178[0]);
        if (uVar3 < uVar1) {
          iVar13 = -1;
        }
        uVar1 = 0;
        if (uVar7 != 0) {
          uVar1 = (iVar13 + uVar7) / uVar7;
        }
        iVar13 = uVar1 * uVar7;
      }
      else {
        iVar13 = 0;
        if (uVar1 <= uVar3) {
          iVar13 = (uVar3 - 0x20) - (uint)bVar5;
        }
      }
      lVar9 = FUN_002a9208(param_1[5],iVar12);
      iVar2 = 0;
      if (*(byte *)(lVar9 + 0x1a) + 0x20 <= *(uint *)(lVar9 + 0x5f8)) {
        iVar2 = ((uint)*(byte *)(lVar9 + 0x1a) - *(uint *)(lVar9 + 0x5f8)) + 0x20;
      }
      iVar2 = iVar2 + iVar13;
      plVar10 = (long *)FUN_002ba58c(*plVar6);
      uVar11 = FUN_002a9208(param_1[5],iVar12);
      uVar8 = (**(code **)(*plVar10 + 0x28))(plVar10,uVar11);
      if ((local_194[0] & 0xffff) + (uint)(ushort)local_1a0 != 0) {
        uVar14 = *(undefined8 *)(*plVar6 + 0x88);
        uVar11 = FUN_002a9208(param_1[5],iVar12);
        FUN_002a8ab0(&local_70,uVar14,uVar11,(uint)(ushort)local_1a0 + (local_194[0] & 0xffff),uVar8
                     ,iVar2,1);
      }
      if ((short)local_194[0] != 0) {
        uVar14 = *(undefined8 *)(*plVar6 + 0x90);
        uVar11 = FUN_002a9208(param_1[5],iVar12);
        FUN_002a8ab0(&local_70,uVar14,uVar11,(short)local_194[0],uVar8,iVar2,1);
      }
      if ((ushort)local_1a0 != 0) {
        uVar14 = *(undefined8 *)(*plVar6 + 0x98);
        uVar11 = FUN_002a9208(param_1[5],iVar12);
        FUN_002a8ab0(&local_70,uVar14,uVar11,local_1a0 & 0xffff,uVar8,iVar2,1);
      }
      local_70 = 0x8000000000;
      local_68 = 0;
      uVar11 = FUN_002a9208(param_1[5],iVar12);
      FUN_002a8940(param_1,&local_70,uVar11,"PacketWriter::EndDispatch");
      if ((local_178[0] != 0) &&
         (lVar9 = FUN_002a9208(param_1[5],iVar12), *(char *)(lVar9 + 0x62a) == '\0')) {
        local_70 = 0;
        FUN_002282f0(&local_70);
        local_1a0 = local_70;
        memcpy(local_194,&local_1a0,8);
        if ((*(int *)((long)param_1 + 0xc) == 1) && (param_1[0x126] != 0)) {
          param_1[0x129] = param_1[0x129] + 1;
          lVar9 = FUN_002a9208(param_1[5],iVar12);
          FUN_00228460(lVar9 + 0x1b,param_1[0x129]);
          plVar10 = (long *)param_1[0x126];
          uVar11 = FUN_002a9208(param_1[5],iVar12);
          (**(code **)(*plVar10 + 0x18))(&local_70,plVar10,local_194,0xc,uVar11);
        }
        local_168 = 0xc;
        local_170 = local_194;
        uVar11 = FUN_002a9208(param_1[5],iVar12);
        FUN_0022bab8(&local_70,uVar11,local_178);
      }
      plVar10 = (long *)FUN_002ba58c(*plVar6);
      uVar11 = FUN_002a9208(param_1[5],iVar12);
      (**(code **)(*plVar10 + 0x30))(plVar10,uVar11);
      FUN_002a9208(param_1[5],iVar12);
      FUN_0022b448();
      local_70 = 0x8000000000;
      local_68 = 0;
      uVar11 = FUN_002a9208(param_1[5],iVar12);
      FUN_002a893c(param_1,&local_70,uVar11,1,"PacketWriter::EndDispatch");
      iVar12 = iVar12 + 1;
      lVar9 = FUN_002a9208(param_1[5],iVar12);
    } while (lVar9 != 0);
  }
  FUN_002a9250(param_1[5]);
  *(undefined2 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  param_1[0x66] = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  *(undefined1 *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  param_1[0x84] = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  param_1[0x89] = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  param_1[0x8e] = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  param_1[0x93] = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  param_1[0x9d] = 0;
  *(undefined1 *)(param_1 + 0xa1) = 0;
  param_1[0xa2] = 0;
  return;
}

