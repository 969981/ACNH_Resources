
void FUN_020416e0(long param_1,long *param_2,undefined8 *param_3,undefined4 *param_4,int param_5,
                 uint param_6)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 *__src;
  undefined1 *__dest;
  ulong uVar4;
  size_t sVar5;
  long lVar6;
  char *__s;
  undefined *local_228;
  undefined1 *local_220;
  undefined4 local_218;
  undefined1 local_214 [127];
  undefined1 local_195;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  ulong local_174;
  undefined8 local_16c;
  undefined *local_160;
  undefined1 *local_158;
  int local_150;
  undefined1 local_14c [127];
  undefined1 local_cd;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined8 local_c0;
  char *local_b8;
  undefined ***local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined **local_98;
  undefined **ppuStack_90;
  undefined4 local_88;
  char local_80 [32];
  
  local_178 = 0;
  local_190 = 0xa00000000;
  local_188 = 0x41f00000;
  local_180 = 0x3f80000041a00000;
  local_158 = local_14c;
  local_150 = 0x80;
  local_cd = 0;
  local_14c[0] = 0;
  local_218 = 0x80;
  local_c0 = 0;
  local_228 = PTR_DAT_04bb2d88 + 0x10;
  local_c4 = 0;
  local_174 = 0;
  local_16c = 0;
  local_220 = local_214;
  local_195 = 0;
  local_214[0] = 0;
  local_c8 = 7;
  local_160 = local_228;
  (**(code **)(*param_2 + 0x18))(param_2);
  local_b0 = &local_98;
  local_a0 = 0;
  local_b8 = "%s/AIC:CloudIsland/AIF:AI_NPC_CloudIsland";
  __s = (char *)param_2[1];
  local_a8 = 0x2900000000;
  local_88 = 0;
  local_98 = &PTR_LAB_04b649f8;
  ppuStack_90 = &local_228;
  *local_220 = 0;
  if (local_b8 == (char *)0x0) {
    local_b8 = __s;
    sVar5 = strlen(__s);
    local_a8 = CONCAT44((int)sVar5,(int)local_a8);
    pcVar3 = __s;
  }
  else {
    uVar4 = FUN_038cf2b0(&local_b8,local_80);
    pcVar3 = local_b8;
    if ((uVar4 & 1) != 0) {
      pcVar3 = (char *)0x0;
      if (local_80[0] != '\0') {
        pcVar3 = local_80;
      }
      FUN_038cf4a0(pcVar3,local_b0,__s,0xffffffff);
      pcVar3 = local_b8;
    }
  }
  if (pcVar3 != (char *)0x0) {
    local_a0 = 0;
    while( true ) {
      if (local_a8._4_4_ <= (int)local_a8) break;
      FUN_038cf2b0(&local_b8,local_80);
    }
  }
  __dest = local_158;
  (**(code **)(local_228 + 0x18))(&local_228);
  __src = local_220;
  if (__dest != local_220) {
    (**(code **)(local_228 + 0x18))(&local_228);
    lVar6 = 0;
    do {
      if (local_220[lVar6] == '\0') goto LAB_020418dc;
      if (local_220[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_020418dc;
      }
      if (local_220[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_020418dc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_020418dc:
    iVar2 = (int)lVar6;
    if (local_150 <= (int)lVar6) {
      iVar2 = local_150 + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    __dest[iVar2] = 0;
  }
  local_188 = *param_3;
  local_178 = *param_4;
  local_180 = CONCAT44(local_180._4_4_,*(undefined4 *)(param_3 + 1));
  local_174 = CONCAT44(param_6,param_5 + 0x800) & 0x1ffffffff;
  if ((param_6 & 1) != 0) {
    uVar1 = param_5 + 0x62;
    local_b8 = (char *)CONCAT44(local_b8._4_4_,uVar1);
    lVar6 = *(long *)PTR_DAT_04bb4760 + (ulong)uVar1 * 0x15;
    if (0x6c < uVar1) {
      lVar6 = *(long *)PTR_DAT_04bb4760;
    }
    local_16c = CONCAT44(local_16c._4_4_,(uint)(*(ushort *)(lVar6 + 9) >> 4)) & 0xffffffff000000ff;
  }
  FUN_007402e0(*(undefined8 *)PTR_DAT_04bb27c0,&local_190,*(undefined4 *)(param_1 + 0x230),0);
  return;
}

