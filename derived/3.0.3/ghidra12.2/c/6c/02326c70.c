
uint FUN_02326c70(byte *param_1,undefined8 param_2,uint *param_3)

{
  undefined *puVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *local_78;
  char *local_70;
  undefined1 local_68;
  byte local_67;
  undefined4 local_60 [6];
  undefined8 local_48;
  
  if (7 < *param_1) goto LAB_02326d6c;
  uVar6 = 1;
  uVar5 = FUN_02582d8c(param_1,1);
  puVar4 = PTR_DAT_04bb6298;
  if (7 < uVar5) goto LAB_02326d70;
  if ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0') &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')) {
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 != -1) {
      local_60[0] = 0x20;
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
      if (0xff < (uint)(int)sVar3) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        FUN_02327084(param_1,param_2,param_3);
        goto LAB_02326d6c;
      }
    }
    uVar9 = FUN_016e6498();
    if ((uVar9 & 1) == 0) {
      uVar5 = *param_3;
      local_48 = 0xfffe;
      FUN_0277d4ac(&local_48);
      FUN_016e49e4(&local_48,param_2,uVar5 == 1);
      puVar1 = PTR_DAT_04bb43c0;
      sVar3 = *(short *)puVar4;
      if (sVar3 == -1) {
LAB_02326e68:
        uVar9 = FUN_0277e788(&local_48);
        puVar4 = PTR_DAT_04bb43c0;
        if ((uVar9 & 1) != 0) {
          lVar12 = *(long *)PTR_DAT_04bb43c0;
          uVar6 = FUN_0277d6c4(&local_48);
          if (*(long *)puVar4 != 0) {
            lVar12 = *(long *)(lVar12 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
              FUN_01ad5d04(local_60,&local_48);
              if ((*(long *)PTR_DAT_04bb39b0 == 0) ||
                 ((*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0 ||
                  (uVar9 = FUN_0243c848(param_1), (uVar9 & 1) == 0)))) {
                iVar8 = FUN_01ad9fd0(local_60);
                if (iVar8 == 0x8c) {
                  local_78 = PTR_DAT_04bb2020 + 0x10;
                  local_70 = "GulBGetQuestItem";
                  FUN_0274ca70(param_1,&local_78,1);
                }
              }
              else {
                uVar9 = FUN_0243c848(param_1);
                if ((((uVar9 & 1) == 0) && (uVar9 = FUN_01aed24c(local_60), uVar5 != 1)) &&
                   ((uVar9 & 1) != 0)) {
                  uVar6 = FUN_01aed730(local_60);
                  uVar7 = FUN_0267ad90(param_1);
                  if ((uVar6 <= uVar7) &&
                     (uVar9 = FUN_0267b890(param_1,&local_48), (uVar9 & 1) != 0)) goto LAB_02326d6c;
                }
                if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
                   (lVar12 = (**(code **)(*(long *)**(undefined8 **)
                                                     (*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30))(),
                   lVar12 != 0)) {
                  local_68 = 0;
                  local_70 = (char *)(lVar12 + 0x276f88);
                  if (*(long *)(lVar12 + 0x276fb0) == 0) {
                    local_67 = 0;
                  }
                  else {
                    puVar10 = *(undefined8 **)(*(long *)(lVar12 + 0x276fb0) + 0x10);
                    local_67 = 0;
                    if (puVar10 != (undefined8 *)0x0) {
                      local_67 = (**(code **)*puVar10)();
                    }
                  }
                  local_67 = local_67 & 1;
                  local_78 = PTR_DAT_04bb86e8 + 0x10;
                  uVar11 = FUN_0232739c(&local_78);
                  FUN_027a98b4(uVar11,param_2,uVar5 == 1);
                  FUN_02640184(&local_78);
                  goto LAB_02326e60;
                }
              }
              uVar9 = FUN_01aed24c(local_60);
              if ((uVar5 != 1) && ((uVar9 & 1) != 0)) {
                FUN_01aed730(local_60);
                FUN_0267ad90(param_1);
                uVar6 = FUN_0267b890(param_1,&local_48);
                goto LAB_02326d70;
              }
              uVar6 = 1;
              uVar9 = FUN_026738b0(param_1,&local_48,1,0);
              if ((uVar9 & 1) != 0) goto LAB_02326d70;
            }
          }
        }
        uVar6 = 0;
        goto LAB_02326d70;
      }
      local_60[0] = 0x15;
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
      if (0xff < (uint)(int)sVar3) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x15 & 1) == 0) goto LAB_02326e68;
      lVar12 = *(long *)PTR_DAT_04bb43c0;
      uVar6 = FUN_0277d6c4(&local_48);
      if (*(long *)puVar1 == 0) goto LAB_02326d6c;
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_02326d6c;
LAB_02326e60:
      FUN_02648c90(param_1,&local_48,(uVar5 & 0xfffffffe) == 2);
    }
    else {
      FUN_0369fe54(*(undefined8 *)PTR_DAT_04bc3a50,param_2);
    }
  }
LAB_02326d6c:
  uVar6 = 1;
LAB_02326d70:
  return uVar6 & 1;
}

