
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0253e210(byte *param_1)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_180 [8];
  char *local_178;
  int local_170;
  char *local_120;
  int local_118;
  char *local_c8;
  int local_c0;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_5c;
  undefined4 local_58;
  
  FUN_0257a010(auStack_180);
  if (local_c8 != "PlayerWait") {
    iVar1 = 10;
    if (local_c0 < 0xb) {
      iVar1 = local_c0 + -1;
    }
    memcpy(local_c8,"PlayerWait",(long)iVar1);
    local_c8[iVar1] = '\0';
  }
  pcVar3 = local_178;
  if (local_178 != "Player_StartGamePhoneCall") {
    iVar1 = 0x19;
    if (local_170 < 0x1a) {
      iVar1 = local_170 + -1;
    }
    memcpy(local_178,"Player_StartGamePhoneCall",(long)iVar1);
    pcVar3[iVar1] = '\0';
  }
  pcVar3 = local_120;
  if (local_120 != "UnlockAmiiboPosterTell_Airport") {
    iVar1 = 0x1e;
    if (local_118 < 0x1f) {
      iVar1 = local_118 + -1;
    }
    memcpy(local_120,"UnlockAmiiboPosterTell_Airport",(long)iVar1);
    pcVar3[iVar1] = '\0';
  }
  local_78 = 0;
  local_74 = DAT_04c9a0c8;
  local_58 = DAT_0558600c;
  local_5c = _DAT_05586008;
  if (*local_178 != '\0') {
    if (*local_120 == '\0') {
      return 0;
    }
    if (7 < *param_1) {
      return 0;
    }
    uVar4 = FUN_02582d8c(param_1,1);
    puVar2 = PTR_DAT_04bb4fb8;
    if ((((uVar4 < 8) &&
         (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) &&
       ((uVar4 = FUN_02582d8c(param_1,1), uVar4 < 8 &&
        (lVar5 = *(long *)puVar2, *(char *)(lVar5 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')))) {
      lVar6 = lVar5 + (ulong)uVar4 * 0x13f0;
      if ((**(char **)(lVar6 + 0x230) == '\0') ||
         (**(char **)(lVar5 + (ulong)uVar4 * 0x13f0 + 0x288) == '\0')) {
        FUN_02478400(lVar6 + 0x228,auStack_180);
        if (DAT_0556aa70 != 0) {
          *(uint *)(DAT_0556aa70 + 0x43c) = *(uint *)(DAT_0556aa70 + 0x43c) | 0x10;
        }
        return 1;
      }
    }
  }
  return 0;
}

