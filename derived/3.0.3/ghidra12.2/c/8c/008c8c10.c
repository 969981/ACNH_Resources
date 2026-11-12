
undefined8 FUN_008c8c10(undefined8 param_1,undefined4 param_2,ulong param_3,uint param_4)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 local_70;
  float fStack_6c;
  undefined4 local_68;
  undefined **local_60;
  char *pcStack_58;
  undefined **local_50;
  undefined *puStack_48;
  
  if ((int)param_3 == 0) {
    return 0;
  }
  if (DAT_04c93e08 == 0) {
    return 0;
  }
  lVar8 = *(long *)(*(long *)(*(long *)(DAT_04c93e08 + 0x1c0) + 8) + (param_3 >> 0x14 & 0xfff) * 8);
  if (((lVar8 == 0) || ((*(uint *)(lVar8 + 0x248) >> 1 & 1) != 0)) ||
     (*(int *)(lVar8 + 0x230) != (int)param_3)) {
    lVar8 = 0;
  }
  if (*(int *)(DAT_04c93e08 + 0x288) == 1 || *(int *)(DAT_04c93e08 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    lVar2 = DAT_04c93e08;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar5 = 1;
      goto joined_r0x008c8cdc;
    }
    if (*(uint *)(lVar2 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar2 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x008c8cdc;
    }
  }
  uVar5 = 0;
joined_r0x008c8cdc:
  if (lVar8 != 0) {
    uVar5 = uVar5 ^ 1;
    if (*(int *)(lVar8 + 0x150) != 1) {
      uVar5 = 1;
    }
    if ((uVar5 == 0) && (lVar8 = *(long *)(lVar8 + 0x68), lVar8 != 0)) {
      local_68 = *(undefined4 *)(lVar8 + 0x280);
      fStack_6c = (float)((ulong)*(undefined8 *)(lVar8 + 0x278) >> 0x20);
      uVar7 = (ulong)(short)DAT_04c487d4;
      _local_70 = CONCAT44(fStack_6c + 6.2,(int)*(undefined8 *)(lVar8 + 0x278));
      if (uVar7 == 0xffffffffffffffff) {
        uVar5 = 0;
        uVar6 = 0;
      }
      else {
        puVar1 = &DAT_055c11c8 + (uVar7 & 0xffffffff) * 2;
        if (0xff < DAT_04c487d4) {
          puVar1 = &DAT_055c11c8;
        }
        uVar5 = *puVar1 & 1;
        puVar1 = &DAT_055c11c8 + (uVar7 & 0xffffffff) * 2;
        if (0xff < DAT_04c487d4) {
          puVar1 = &DAT_055c11c8;
        }
        uVar6 = *puVar1 >> 1 & 1;
      }
      if ((uVar5 != 0) || (uVar6 != 0)) {
        lVar8 = 0x39;
        if (uVar6 == 0) {
          lVar8 = 0;
        }
        lVar2 = 0x38;
        if (uVar5 == 0) {
          lVar2 = lVar8;
        }
        puStack_48 = (&PTR_s_cNormal_04922de8)[lVar2];
        local_50 = &PTR_LAB_048f9770;
        local_60 = &PTR_LAB_048f9770;
        pcStack_58 = s_cTalk_04926436;
        FUN_008d9d70(param_1,&local_50,&local_60,param_2,&local_70,param_4 & 1);
      }
      return 1;
    }
  }
  return 0;
}

