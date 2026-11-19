
void FUN_0383d844(float param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  char *pcVar4;
  long lVar5;
  undefined8 local_230;
  undefined **local_228;
  long lStack_220;
  undefined *local_218;
  undefined2 local_210;
  undefined1 local_20e;
  undefined8 local_208;
  undefined8 uStack_200;
  long local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined *local_1d8;
  char *pcStack_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  undefined2 local_1a8;
  undefined8 local_1a0;
  undefined *puStack_198;
  undefined1 *local_190;
  undefined4 local_188;
  undefined1 local_184 [127];
  undefined1 local_105;
  undefined *local_100;
  undefined1 *puStack_f8;
  undefined4 local_f0;
  undefined1 local_ec [127];
  undefined1 local_6d;
  undefined *local_68;
  undefined1 *puStack_60;
  undefined4 local_58;
  undefined1 local_54 [31];
  undefined1 local_35;
  
  bVar3 = *(byte *)(param_2 + 8);
  if ((bVar3 >> 2 & 1) != 0) {
    if (param_3 == 0) {
      return;
    }
    if (param_1 < 0.0) {
      return;
    }
    if (19600.0 <= param_1) {
      if (param_1 < 32400.0) {
        return;
      }
      pcVar4 = *(char **)(param_2 + 0x30);
      if ((((((((*pcVar4 != 'D') || (pcVar4[1] != 'o')) || (pcVar4[2] != 'u')) ||
             ((pcVar4[3] != 'b' || (pcVar4[4] != 'u')))) ||
            ((pcVar4[5] != 't' || ((pcVar4[6] != 's' || (pcVar4[7] != 'u')))))) ||
           (pcVar4[8] != 'g')) || (pcVar4[9] != 'o')) && (*(long *)(param_2 + 0x20) != 0)) {
        iVar1 = *(int *)(*(long *)(param_2 + 0x20) + 0x18);
        if ((iVar1 != 0) && (FUN_03bf3c20(), *(long *)(param_2 + 0x20) == 0)) {
          return;
        }
        iVar2 = FUN_03be1320();
        if (iVar2 != 0 || iVar1 != 0) {
          return;
        }
        bVar3 = *(byte *)(param_2 + 8);
      }
      local_218 = PTR_DAT_04bcb3e0;
      local_1c8 = PTR_DAT_04bcb3b8;
      uStack_1f0 = 0;
      *(byte *)(param_2 + 8) = bVar3 & 0xfd;
      *(undefined4 *)(param_2 + 0x10) = 6;
      local_228 = &local_218;
      local_190 = local_184;
      local_218 = local_218 + 0x10;
      local_1c8 = local_1c8 + 0x10;
      lStack_220 = param_2 + 0x80;
      local_1c0 = 0;
      local_1b8 = *(undefined8 *)(param_3 + 0x18);
      local_1a8 = 0;
      local_1d8 = PTR_DAT_04bb2020 + 0x10;
      local_188 = 0x80;
      local_105 = 0;
      local_184[0] = 0;
      local_f0 = 0x80;
      puStack_198 = PTR_DAT_04bb2d88 + 0x10;
      local_6d = 0;
      puStack_f8 = local_ec;
      local_ec[0] = 0;
      local_35 = 0;
      local_1a0 = 0;
      local_58 = 0x20;
      puStack_60 = local_54;
      local_54[0] = 0;
      local_68 = PTR_DAT_04bb2028 + 0x10;
      local_230 = 0;
      pcStack_1d0 = "DestroySLink";
      local_210 = 1;
      local_208 = *(undefined8 *)(DAT_05ae0b40 + 0x50);
      local_1e8 = 0;
      uStack_1e0 = 0;
      uStack_200 = 0;
      local_20e = 2;
      local_1f8 = DAT_05ae0b40 + 0x270;
      local_1b0 = lStack_220;
      local_100 = puStack_198;
      FUN_03f45184(DAT_05ae0b40 + 0x58,&local_230);
      return;
    }
  }
  if (((param_4 & 1) == 0) && (*(int *)(param_2 + 0x10) == 4)) {
    lVar5 = *(long *)(param_2 + 0x20);
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0xd8) >> 1 & 1) != 0)) {
      FUN_03bf2370(lVar5 + 0x80);
      *(byte *)(lVar5 + 0xd8) = *(byte *)(lVar5 + 0xd8) & 0xfd;
    }
    *(undefined4 *)(param_2 + 0x10) = 5;
  }
  return;
}

