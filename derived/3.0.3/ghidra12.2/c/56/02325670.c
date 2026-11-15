
undefined8 FUN_02325670(long param_1)

{
  undefined *puVar1;
  long lVar2;
  byte *pbVar3;
  byte bVar4;
  short sVar5;
  char *pcVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  void *__src;
  undefined *local_1a0;
  char *local_198;
  int local_190;
  char *local_140;
  int local_138;
  void *local_e8;
  int local_e0;
  undefined1 local_98;
  undefined4 local_8c;
  undefined *local_50;
  char *pcStack_48;
  byte local_24 [4];
  
  if (*(char *)(param_1 + 0x17ac) == '\0') {
    local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,0x27);
    if ((*(uint *)(param_1 + 0xed4) >> 7 & 1) != 0) {
      local_24[0] = *(byte *)(param_1 + 0x1ee8);
      if (7 < local_24[0]) {
        local_24[0] = 0xff;
      }
      uVar8 = FUN_016e6604(local_24);
      if ((uVar8 & 1) != 0) {
        puVar1 = PTR_DAT_04bb2020 + 0x10;
        local_198 = "WHEREAREN_Unlock_DustCloth_01";
        local_1a0 = puVar1;
        iVar7 = FUN_0274bce0(local_24,&local_1a0);
        if (iVar7 == 0) {
          pcStack_48 = "WHEREAREN_Unlock_DustCloth_02";
          local_50 = puVar1;
          iVar7 = FUN_0274bce0(local_24,&local_50);
          if (iVar7 == 0) {
            return 0;
          }
        }
        sVar5 = *(short *)PTR_DAT_04bb6298;
        if (sVar5 != -1) {
          local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,0x20);
          puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
          if (0xff < (uint)(int)sVar5) {
            puVar1 = PTR_DAT_04bc39f8;
          }
          if ((*(uint *)(puVar1 + 4) & 1) != 0) {
            lVar9 = **(long **)PTR_DAT_04bb27d0;
            bVar4 = *(byte *)(lVar9 + 0x473);
            if ((long)(char)bVar4 != 0xffffffffffffffff) {
              pbVar3 = (byte *)(lVar9 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
              if (7 < bVar4) {
                pbVar3 = (byte *)(lVar9 + 0x48);
              }
              if (((*pbVar3 >> 3 & 1) != 0) && (*(byte *)(lVar9 + 0x472) != bVar4)) {
                return 0;
              }
            }
          }
        }
        uVar8 = FUN_024d7a34(param_1);
        if ((uVar8 & 1) != 0) {
          return 0;
        }
        if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
          FUN_0257a010(&local_1a0);
          puVar1 = PTR_PTR_04bb2238;
          (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
          __src = *(void **)(puVar1 + 8);
          if (local_e8 != __src) {
            (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
            lVar9 = 0;
            do {
              if (*(char *)(*(long *)(puVar1 + 8) + lVar9) == '\0') goto LAB_023258f8;
              lVar2 = *(long *)(puVar1 + 8) + lVar9;
              if (*(char *)(lVar2 + 1) == '\0') {
                lVar9 = lVar9 + 1;
                goto LAB_023258f8;
              }
              if (*(char *)(lVar2 + 2) == '\0') {
                lVar9 = lVar9 + 2;
                goto LAB_023258f8;
              }
              lVar9 = lVar9 + 3;
            } while (lVar9 != 0x80001);
            lVar9 = 0;
LAB_023258f8:
            iVar7 = (int)lVar9;
            if (local_e0 <= (int)lVar9) {
              iVar7 = local_e0 + -1;
            }
            memcpy(local_e8,__src,(long)iVar7);
            *(undefined1 *)((long)local_e8 + (long)iVar7) = 0;
          }
          pcVar6 = local_198;
          if (local_198 != "Player_ToolActionError") {
            iVar7 = 0x16;
            if (local_190 < 0x17) {
              iVar7 = local_190 + -1;
            }
            memcpy(local_198,"Player_ToolActionError",(long)iVar7);
            pcVar6[iVar7] = '\0';
          }
          if (local_140 != "Towel_ExistVisitor") {
            iVar7 = 0x12;
            if (local_138 < 0x13) {
              iVar7 = local_138 + -1;
            }
            memcpy(local_140,"Towel_ExistVisitor",(long)iVar7);
            local_140[iVar7] = '\0';
          }
          local_98 = 0;
          local_8c = 0xc;
          FUN_024480f0(param_1,&local_1a0);
          return 1;
        }
        uVar8 = FUN_02538ce0(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230),1,1);
        if ((uVar8 & 1) != 0) {
          return 1;
        }
      }
      if (*(char *)(param_1 + 0x17ac) == '\0') {
        local_1a0 = (undefined *)CONCAT44(local_1a0._4_4_,0x1f);
        if ((*(int *)(param_1 + 0xed0) < 0) && (uVar8 = FUN_023d66a4(param_1,0), (uVar8 & 1) != 0))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}

