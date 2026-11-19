
undefined1 FUN_03873440(long param_1)

{
  long ****pppplVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 uVar4;
  long lVar5;
  long ****pppplVar6;
  long lVar7;
  long lVar8;
  int local_88 [4];
  long ****local_78;
  long ****local_70;
  long local_68;
  undefined1 auStack_60 [16];
  
  lVar5 = *(long *)PTR_DAT_04bcb8d8;
  if (lVar5 == 0) {
    puVar3 = PTR_DAT_04bb2950;
LAB_03873604:
    uVar4 = *puVar3;
  }
  else {
    local_78 = (long ****)&local_78;
    local_68 = 0;
    local_70 = local_78;
    FUN_002c129c(local_88,lVar5,*(undefined1 *)(param_1 + 0x2af),&local_78);
    if (local_88[0] != 0) {
      FUN_00223064(local_88);
    }
    puVar3 = PTR_DAT_04bcb7d8;
    lVar7 = *(long *)PTR_DAT_04bb29d0;
    do {
      uVar2 = FUN_002c1390(lVar5);
      if ((uVar2 & 1) != 0) {
        FUN_002c13ac(auStack_60,lVar5);
        FUN_00229780(local_88,auStack_60);
      }
      lVar8 = *(long *)(*(long *)puVar3 + 0x18);
      FUN_0389df38(auStack_60);
      nn::os::ConvertToTimeSpan((long)(lVar7 * (ulong)*(uint *)(lVar8 + 0x70)) / 1000);
      nn::os::SleepThread();
    } while ((uVar2 & 1) == 0);
    if (local_88[0] == 0) {
      if (local_68 == 0) {
        puVar3 = PTR_DAT_04bb2958;
        goto LAB_03873604;
      }
      FUN_038770a0(*(undefined8 *)(param_1 + 0x40),&local_78);
      puVar3 = PTR_DAT_04bb2958;
    }
    else {
      lVar5 = *(long *)(*(long *)puVar3 + 0x30);
      if (*(char *)(lVar5 + 0xf0) == '\0') {
        *(undefined1 *)(lVar5 + 0xf0) = 1;
        FUN_00229780(lVar5 + 0xf4,local_88);
        *(undefined4 *)(lVar5 + 0x104) = 0;
      }
      puVar3 = PTR_DAT_04bb2950;
    }
    uVar4 = *puVar3;
    if (local_68 != 0) {
      (*local_70)[1] = (long **)local_78[1];
      *local_78[1] = (long **)*local_70;
      local_68 = 0;
      pppplVar1 = local_70;
      while ((long *****)pppplVar1 != &local_78) {
        pppplVar6 = (long ****)pppplVar1[1];
        (*(code *)*pppplVar1[2])();
        FUN_00187e4c(pppplVar1);
        pppplVar1 = pppplVar6;
      }
    }
  }
  return uVar4;
}

