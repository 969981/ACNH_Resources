
void FUN_006fbc40(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *__src;
  long lVar3;
  undefined1 *__dest;
  undefined *local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined1 local_134 [255];
  undefined1 local_35;
  
  puVar2 = PTR_PTR_04bb2238;
  local_35 = 0;
  local_138 = 0x100;
  local_134[0] = 0;
  local_140 = local_134;
  local_148 = PTR_DAT_04bb21f8 + 0x10;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  FUN_038d1270(&local_148,"Actor(%s)",*(undefined8 *)(puVar2 + 8));
  __dest = *(undefined1 **)(param_1 + 0x60);
  (**(code **)(local_148 + 0x18))(&local_148);
  __src = local_140;
  if (__dest != local_140) {
    (**(code **)(local_148 + 0x18))(&local_148);
    lVar3 = 0;
    do {
      if (local_140[lVar3] == '\0') goto LAB_006fbd2c;
      if (local_140[lVar3 + 1] == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_006fbd2c;
      }
      if (local_140[lVar3 + 2] == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_006fbd2c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_006fbd2c:
    iVar1 = (int)lVar3;
    if (*(int *)(param_1 + 0x68) <= (int)lVar3) {
      iVar1 = *(int *)(param_1 + 0x68) + -1;
    }
    memcpy(__dest,__src,(long)iVar1);
    __dest[iVar1] = 0;
  }
  return;
}

