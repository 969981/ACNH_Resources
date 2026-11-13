
void FUN_00c12d94(long param_1,undefined4 *param_2,undefined8 param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  undefined8 *puVar7;
  byte bVar8;
  long lVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  int iStack_34;
  
  puVar5 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar3 = puVar5[3];
  uVar4 = *puVar5 ^ *puVar5 << 0xb;
  *puVar5 = puVar5[1];
  puVar5[1] = puVar5[2];
  uVar2 = uVar4 ^ uVar3;
  uVar4 = uVar4 >> 8 ^ uVar3 >> 0x13 ^ uVar2;
  puVar5[2] = uVar3;
  puVar5[3] = uVar4;
  local_40 = (uVar4 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  uStack_3c = (local_40 ^ local_40 >> 0x1e) * 0x6c078965 + 2;
  local_38 = (uStack_3c ^ uStack_3c >> 0x1e) * 0x6c078965 + 3;
  iStack_34 = (local_38 ^ local_38 >> 0x1e) * 0x6c078965 + 4;
  pbVar1 = &DAT_0548e140;
  if (*(long *)(param_1 + 8) != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  if ((((*pbVar1 < 8) && (uVar4 = FUN_02582d8c(pbVar1,1), uVar4 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) {
    bVar8 = *pbVar1;
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    local_48 = CONCAT31(local_48._1_3_,bVar8);
    lVar6 = FUN_02583354(DAT_055021a0,&local_48,1);
    if (lVar6 != 0) {
      lVar9 = lVar6 + 0x194b0;
      if (*(long *)(lVar6 + 0x194b8) == 0) {
        lVar9 = *(long *)(DAT_05574040 + 0x20);
      }
      if ((*(long **)(lVar9 + 0x1090) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x1090), puVar7 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar7)();
        uVar4 = uVar4 ^ 1;
      }
      FUN_01a4d290(&local_48,&local_40,param_3,*(long *)(lVar9 + 0x1078) + *(long *)(lVar9 + 0x1070)
                   ,0,0,0,0);
      *param_2 = local_48;
      param_2[1] = uStack_44;
      if ((((uVar4 & 1) == 0) && (*(long *)(lVar9 + 0x1090) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x1090) + 8), puVar7 != (undefined8 *)0x0)) {
        (**(code **)*puVar7)();
      }
    }
  }
  return;
}

