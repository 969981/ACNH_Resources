
void FUN_030bc410(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  char *__src;
  int iVar3;
  long lVar4;
  undefined *local_88;
  char *local_80;
  undefined4 local_78;
  char local_74 [63];
  undefined1 local_35;
  long local_18;
  
  FUN_03d75e70();
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "*GuideOff";
  uVar1 = FUN_03c68d44(param_2,&local_88,PTR_PTR_04bb2238);
  *(undefined8 *)(param_1 + 800) = uVar1;
  plVar2 = *(long **)(param_1 + 0x58);
  local_18 = 0;
  if (((plVar2 == (long *)0x0) || ((**(code **)(*plVar2 + 0x28))(plVar2,&local_18), local_18 == 0))
     || (*(long *)(local_18 + 0xb8) == 0)) {
    __src = (char *)0x0;
  }
  else {
    __src = (char *)FUN_00364d70((long *)(local_18 + 0xb8),"GuideText");
    local_80 = local_74;
    local_35 = 0;
    local_78 = 0x40;
    if (local_80 == __src) goto LAB_030bc558;
  }
  local_88 = PTR_DAT_04bb2030 + 0x10;
  local_35 = 0;
  local_78 = 0x40;
  local_80 = local_74;
  lVar4 = 0;
  do {
    if (__src[lVar4] == '\0') {
LAB_030bc534:
      iVar3 = (int)lVar4;
joined_r0x030bc538:
      if (0x3f < iVar3) {
        iVar3 = 0x3f;
      }
      goto LAB_030bc540;
    }
    if (__src[lVar4 + 1] == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_030bc534;
    }
    if (__src[lVar4 + 2] == '\0') {
      iVar3 = (int)lVar4 + 2;
      goto joined_r0x030bc538;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  iVar3 = 0;
LAB_030bc540:
  memcpy(local_80,__src,(long)iVar3);
  local_74[iVar3] = '\0';
  __src = local_80;
LAB_030bc558:
  local_88 = PTR_DAT_04bb2bc0 + 0x10;
  if (*__src != '\0') {
    uVar1 = FUN_03462900(param_1,param_2,&local_88,&local_18);
    *(undefined8 *)(param_1 + 0x328) = uVar1;
  }
  return;
}

