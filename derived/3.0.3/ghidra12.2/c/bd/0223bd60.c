
void FUN_0223bd60(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  void *pvVar4;
  char *__src;
  long lVar5;
  char *pcVar6;
  undefined *local_98;
  char *local_90;
  int local_88;
  char local_84 [63];
  undefined1 local_45;
  
  FUN_02249a24();
  puVar2 = PTR_PTR_04bb2238;
  local_45 = 0;
  local_88 = 0x40;
  local_98 = PTR_DAT_04bb2f70 + 0x10;
  local_90 = local_84;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pcVar6 = *(char **)(puVar2 + 8);
  if (local_84 != pcVar6) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(puVar2 + 8) + lVar5) == '\0') goto LAB_0223be2c;
      lVar3 = *(long *)(puVar2 + 8) + lVar5;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0223be2c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0223be2c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0223be2c:
    iVar1 = (int)lVar5;
    if (local_88 <= (int)lVar5) {
      iVar1 = local_88 + -1;
    }
    memcpy(local_84,pcVar6,(long)iVar1);
    local_84[iVar1] = '\0';
  }
  pcVar6 = local_90;
  __src = *(char **)(param_1 + 0x280);
  local_98 = PTR_DAT_04bb2bc0 + 0x10;
  if (local_90 != __src) {
    lVar5 = 0;
    do {
      if (__src[lVar5] == '\0') goto LAB_0223bebc;
      if (__src[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0223bebc;
      }
      if (__src[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0223bebc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0223bebc:
    iVar1 = (int)lVar5;
    if (local_88 <= (int)lVar5) {
      iVar1 = local_88 + -1;
    }
    memcpy(local_90,__src,(long)iVar1);
    pcVar6[iVar1] = '\0';
    __src = local_90;
  }
  if (*__src != '\0') {
    lVar5 = *(long *)PTR_DAT_04bb2698;
    if (lVar5 == 0) {
      pvVar4 = malloc(0x328);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        param_3 = (long *)(lVar5 + 8);
        if (lVar3 != 0) {
          param_3 = (long *)(lVar3 + 0xa8);
        }
        param_3 = (long *)*param_3;
      }
      pvVar4 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x328,8);
    }
    FUN_02a77540(pvVar4,&local_98);
    FUN_006f9fc0(param_1,pvVar4,0xffffffff);
  }
  return;
}

