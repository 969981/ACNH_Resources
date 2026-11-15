
ulong FUN_02294810(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *local_298;
  undefined1 *local_290;
  int local_288;
  undefined1 auStack_284 [63];
  undefined1 local_245;
  undefined *local_240;
  undefined1 *local_238;
  int local_230;
  undefined1 local_22c [255];
  undefined1 local_12d;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  ulong local_10c;
  undefined8 local_104;
  undefined *local_f8;
  undefined1 *local_f0;
  int local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  
  puVar3 = PTR_PTR_04bb2238;
  if ((int)param_2[1] < 0) {
    return (ulong)*(uint *)PTR_DAT_04bb3238;
  }
  if (*param_2 == 0) {
    uVar5 = (ulong)*(uint *)PTR_DAT_04bb3238;
  }
  else {
    local_65 = 0;
    local_114 = 0x3f800000;
    local_e4[0] = 0;
    local_e8 = 0x80;
    local_128 = 0xffffffff00000000;
    local_120 = 0;
    local_f0 = local_e4;
    local_f8 = PTR_DAT_04bb2d88 + 0x10;
    local_10c = 0;
    local_104 = 0;
    local_58 = 0;
    local_5c = 0;
    local_230 = 0x100;
    local_60 = 7;
    local_240 = PTR_DAT_04bb4520 + 0x10;
    local_12d = 0;
    local_118 = 0;
    local_238 = local_22c;
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    puVar7 = *(undefined1 **)(puVar3 + 8);
    if (local_22c != puVar7) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
      lVar6 = 0;
      do {
        if (*(char *)(*(long *)(puVar3 + 8) + lVar6) == '\0') goto LAB_0229495c;
        lVar1 = *(long *)(puVar3 + 8) + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0229495c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0229495c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0229495c:
      iVar2 = (int)lVar6;
      if (local_230 <= (int)lVar6) {
        iVar2 = local_230 + -1;
      }
      memcpy(local_22c,puVar7,(long)iVar2);
      local_22c[iVar2] = 0;
    }
    local_245 = 0;
    local_288 = 0x40;
    local_240 = PTR_DAT_04bb21f8 + 0x10;
    local_298 = PTR_DAT_04bb2f70 + 0x10;
    local_290 = auStack_284;
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    puVar7 = *(undefined1 **)(puVar3 + 8);
    if (auStack_284 != puVar7) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
      lVar6 = 0;
      do {
        if (*(char *)(*(long *)(puVar3 + 8) + lVar6) == '\0') goto LAB_02294a2c;
        lVar1 = *(long *)(puVar3 + 8) + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_02294a2c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_02294a2c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_02294a2c:
      iVar2 = (int)lVar6;
      if (local_288 <= (int)lVar6) {
        iVar2 = local_288 + -1;
      }
      memcpy(auStack_284,puVar7,(long)iVar2);
      auStack_284[iVar2] = 0;
    }
    puVar4 = local_290;
    local_298 = PTR_DAT_04bb2bc0 + 0x10;
    (**(code **)(DAT_05473ef8 + 0x18))(&DAT_05473ef8);
    puVar7 = DAT_05473f00;
    if (puVar4 != DAT_05473f00) {
      (**(code **)(DAT_05473ef8 + 0x18))(&DAT_05473ef8);
      lVar6 = 0;
      do {
        if (DAT_05473f00[lVar6] == '\0') goto LAB_02294ae0;
        if (DAT_05473f00[lVar6 + 1] == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_02294ae0;
        }
        if (DAT_05473f00[lVar6 + 2] == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_02294ae0;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_02294ae0:
      iVar2 = (int)lVar6;
      if (local_288 <= (int)lVar6) {
        iVar2 = local_288 + -1;
      }
      memcpy(puVar4,puVar7,(long)iVar2);
      puVar4[iVar2] = 0;
    }
    FUN_038d13f0(&local_298,&DAT_040d486c,(int)param_2[1]);
    (**(code **)(local_298 + 0x18))(&local_298);
    FUN_038d1270(&local_240,"IdrObjTsunekichi00SoldOut/IdrObjCommon/None/%s/XLinkOn",local_290);
    puVar4 = local_f0;
    local_128 = CONCAT44(0xa7,(undefined4)local_128);
    local_114 = *(undefined8 *)((long)param_2 + 0xc);
    local_120 = *(undefined8 *)*param_2;
    local_118 = *(undefined4 *)((undefined8 *)*param_2 + 1);
    local_10c = local_10c & 0xffffffff00000000;
    (**(code **)(local_240 + 0x18))(&local_240);
    puVar7 = local_238;
    if (puVar4 != local_238) {
      (**(code **)(local_240 + 0x18))(&local_240);
      lVar6 = 0;
      do {
        if (local_238[lVar6] == '\0') goto LAB_02294bec;
        if (local_238[lVar6 + 1] == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_02294bec;
        }
        if (local_238[lVar6 + 2] == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_02294bec;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_02294bec:
      iVar2 = (int)lVar6;
      if (local_e8 <= (int)lVar6) {
        iVar2 = local_e8 + -1;
      }
      memcpy(puVar4,puVar7,(long)iVar2);
      puVar4[iVar2] = 0;
    }
    uVar5 = FUN_0224b5e0(*(undefined8 *)PTR_DAT_04bb60a8,&local_128,1);
  }
  return uVar5;
}

