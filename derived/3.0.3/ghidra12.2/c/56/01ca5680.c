
void FUN_01ca5680(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long local_f8;
  long local_f0;
  int local_e8;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((param_2 & 0xfffffffc) == 0) {
    puVar4 = (undefined8 *)(&PTR_s_cVillage_04a452e0)[param_2 & 0xffffffff];
  }
  else {
    puVar4 = &DAT_0407ebb1;
  }
  FUN_0074fda4(&local_f8,"a2O_Xing:%s",puVar4);
  (**(code **)(local_f8 + 0x18))(&local_f8);
  lVar3 = local_f0;
  lVar6 = 0;
  do {
    if (*(char *)(local_f0 + lVar6) == '\0') {
LAB_01ca5720:
      iVar5 = (int)lVar6;
joined_r0x01ca5724:
      if (0xf < iVar5) goto LAB_01ca57d0;
      break;
    }
    if (*(char *)(local_f0 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01ca5720;
    }
    if (*(char *)(local_f0 + lVar6 + 2) == '\0') {
      iVar5 = (int)lVar6 + 2;
      goto joined_r0x01ca5724;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  (**(code **)(local_f8 + 0x18))(&local_f8);
  lVar6 = 0;
  do {
    if (*(char *)(local_f0 + lVar6) == '\0') goto LAB_01ca578c;
    if (*(char *)(local_f0 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01ca578c;
    }
    if (*(char *)(local_f0 + lVar6 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_01ca578c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_01ca578c:
  uVar1 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
  uVar2 = 6;
  if ((int)(local_e8 - uVar1) < 7) {
    uVar2 = local_e8 + ~uVar1;
  }
  if (0 < (int)uVar2) {
    memcpy((void *)(lVar3 + (ulong)uVar1),"_nntnd",(ulong)uVar2);
    *(undefined1 *)(lVar3 + (ulong)uVar2 + (ulong)uVar1) = 0;
  }
LAB_01ca57d0:
  (**(code **)(local_f8 + 0x18))(&local_f8);
  lVar6 = local_f0;
  (**(code **)(local_f8 + 0x18))(&local_f8);
  uVar7 = 0;
  do {
    if (*(char *)(local_f0 + uVar7) == '\0') goto LAB_01ca583c;
    if (*(char *)(local_f0 + uVar7 + 1) == '\0') {
      uVar7 = uVar7 + 1;
      goto LAB_01ca583c;
    }
    if (*(char *)(local_f0 + uVar7 + 2) == '\0') {
      uVar7 = uVar7 + 2;
      goto LAB_01ca583c;
    }
    uVar7 = uVar7 + 3;
  } while (uVar7 != 0x80001);
  uVar7 = 0;
LAB_01ca583c:
  FUN_00244464(auStack_50,param_1 + 0x4ef8,lVar6,uVar7 & 0xffffffff);
  FUN_00244768(auStack_60,param_1 + 0x5130,lVar6,uVar7 & 0xffffffff);
  FUN_00229780(auStack_50,auStack_60);
  return;
}

