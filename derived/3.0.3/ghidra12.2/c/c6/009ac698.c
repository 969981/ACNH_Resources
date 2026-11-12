
void FUN_009ac698(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  short *psVar7;
  long lVar8;
  long lVar9;
  short *local_178;
  long local_170;
  undefined *local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [255];
  undefined1 local_55;
  
  puVar3 = PTR_DAT_04bb3350;
  lVar8 = *(long *)(*(long *)PTR_DAT_04bb2118 + 0x540);
  if (lVar8 == 0) {
    lVar9 = 1;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar8;
  }
  local_55 = 0;
  local_158 = 0x100;
  puStack_160 = local_154;
  local_154[0] = 0;
  local_168 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(DAT_04d01628 + 0x18))(&DAT_04d01628);
  uVar4 = DAT_04d01630;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar8 = param_2[1];
  (**(code **)(DAT_04d01638 + 0x18))(&DAT_04d01638);
  FUN_038d1270(&local_168,"%s\\%s.%s",uVar4,lVar8,DAT_04d01640);
  uVar6 = FUN_03eba3a0(&local_168);
  if (((uVar6 & 1) != 0) && (lVar8 = FUN_03eb9ee0(&local_168,0x1000,0,1), lVar8 != 0)) {
    psVar7 = *(short **)(lVar8 + 8);
    local_170 = 0;
    local_178 = psVar7;
    if (psVar7 != (short *)0x0) {
      uVar6 = FUN_03eaa5e0(psVar7);
      if ((uVar6 & 1) == 0) {
        local_178 = (short *)0x0;
        local_170 = 0;
      }
      else {
        uVar1 = *(uint *)(psVar7 + 6);
        uVar2 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
        if (*psVar7 != 0x5942) {
          uVar2 = uVar1;
        }
        if (uVar2 != 0) {
          local_170 = (long)psVar7 + (ulong)uVar2;
        }
      }
    }
    FUN_009acb94(param_1 + 8,&local_178);
  }
  if (lVar9 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar9;
  }
  return;
}

