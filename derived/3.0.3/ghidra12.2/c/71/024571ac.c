
bool FUN_024571ac(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  float fVar7;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined2 local_70;
  int local_6c;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 uStack_48;
  float local_3c;
  float fStack_38;
  float local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  bVar2 = *(int *)(param_1 + 0x178) == 0;
  if ((*(int *)(param_1 + 0x178) == 0) && ((param_2 & 1) == 0)) {
    local_88 = (float)*(int *)(param_1 + 0xbc4) * 5.0 + 2.5 + 2.5;
    _local_90 = CONCAT44(fStack_8c,(float)*(int *)(param_1 + 0xbc0) * 5.0 + 2.5 + 2.5);
    FUN_0124c030(&local_68,param_1 + 0xbf0);
    fVar7 = (float)FUN_016e026c(0,&local_90,0,0);
    fStack_38 = (float)FUN_0124e3b0(&local_68);
    fStack_38 = fVar7 + fStack_38;
    local_28 = *(undefined4 *)(param_1 + 0xbc8);
    local_34 = local_88;
    local_3c = local_90;
    local_58 = 0;
    local_68 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_60 = PTR_DAT_04bb2010 + 0x10;
    uStack_48 = 0;
    local_50 = puStack_60;
    local_6c = FUN_01517930(&local_68,&local_3c,&local_28,0);
    if ((local_6c == 0) &&
       (uVar3 = FUN_0252b6b0(0x40200000,&local_3c,param_1 + 0x1ee8,1,1,0,1), (uVar3 & 1) == 0)) {
      local_78 = 0x101bf800000;
      local_70 = 0x100;
      local_90 = local_3c;
      fStack_8c = fStack_38;
      local_80 = *(undefined4 *)(param_1 + 0x230);
      local_84 = 0x40200000;
      uStack_7c = *(undefined4 *)PTR_DAT_04bb3238;
      local_88 = local_34;
      uVar3 = FUN_01735670(0x40200000,0xbf800000,&local_90,local_80,uStack_7c,1,1,0,0,0,0,1);
      if (((uVar3 & 1) == 0) && (uVar3 = FUN_016ebc50(0,&local_3c), (uVar3 & 1) == 0)) {
        local_24 = 0xc6;
        *(undefined8 *)(param_1 + 0x1988) = 0;
        *(undefined8 *)(param_1 + 0x1990) = 0;
        *(undefined8 *)(param_1 + 0x1998) = 0;
        *(undefined8 *)(param_1 + 0x19a0) = 0;
        iVar4 = (int)(fStack_38 * 4.0);
        *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
        *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x19a8) = 0;
        *(undefined8 *)(param_1 + 0x19b0) = 0;
        *(undefined8 *)(param_1 + 0x19b8) = 0;
        *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
        *(undefined2 *)(param_1 + 0x1980) = local_28._2_2_;
        *(undefined8 *)(param_1 + 0x19c0) = 0;
        *(undefined8 *)(param_1 + 0x19c8) = 0;
        *(undefined8 *)(param_1 + 0x19d0) = 0;
        if (0x7ffe < iVar4) {
          iVar4 = 0x7fff;
        }
        *(undefined2 *)(param_1 + 0x19d8) = 0;
        if (iVar4 < -0x7fff) {
          iVar4 = -0x8000;
        }
        *(short *)(param_1 + 0x1986) = (short)iVar4;
        *(int *)(param_1 + 0x1982) = (int)(local_3c * 999.99994);
        lVar6 = *(long *)(param_1 + 0x70);
        *(int *)(param_1 + 0x1988) = (int)(local_34 * 999.99994);
        uVar5 = 0;
        lVar1 = 0;
        if (lVar6 != 0) {
          uVar5 = 0;
          if (*(uint *)(lVar6 + 0x280) < 0x149) {
            uVar5 = *(uint *)(lVar6 + 0x280);
          }
          lVar1 = lVar6 + 0x278;
        }
        if (uVar5 != 0xc6) {
          _local_90 = CONCAT44(fStack_8c,0xc6);
          *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
          *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
          *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
          *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
          *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
          *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
          *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
          *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
          *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
          *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
          *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
          *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
          *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
          *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
          *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
          *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
          FUN_03ebb160(lVar1,0xc6);
        }
        *(undefined1 *)(param_1 + 0xbe5) = 0;
        *(undefined8 *)(param_1 + 0xbc0) = 0xffffffffffffffff;
        *(undefined4 *)(param_1 + 0xbc8) = 0;
        *(undefined4 *)(param_1 + 0xbd8) = *(undefined4 *)(param_1 + 0xbdc);
        return true;
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

