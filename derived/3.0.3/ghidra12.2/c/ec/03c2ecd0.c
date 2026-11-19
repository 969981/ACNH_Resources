
void FUN_03c2ecd0(undefined8 param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *__src;
  undefined8 local_198;
  undefined **local_190;
  undefined1 *local_188;
  int local_180;
  undefined1 auStack_17c [255];
  undefined1 local_7d;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined6 uStack_60;
  undefined2 local_5a;
  undefined6 uStack_58;
  
  lVar3 = param_2 + 0x60;
  FUN_03c2d910(param_1,2,lVar3,0);
  local_7d = 0;
  local_180 = 0x100;
  local_198 = *(undefined8 *)(param_2 + 0x58);
  local_190 = (undefined **)(PTR_DAT_04bb4520 + 0x10);
  local_188 = auStack_17c;
  (**(code **)(*(long *)(param_2 + 0x60) + 0x18))(lVar3);
  __src = *(undefined1 **)(param_2 + 0x68);
  if (auStack_17c != __src) {
    (**(code **)(*(long *)(param_2 + 0x60) + 0x18))(lVar3);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x68) + lVar3) == '\0') goto LAB_03c2edac;
      lVar1 = *(long *)(param_2 + 0x68) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_03c2edac;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_03c2edac;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_03c2edac:
    iVar2 = (int)lVar3;
    if (local_180 <= (int)lVar3) {
      iVar2 = local_180 + -1;
    }
    memcpy(auStack_17c,__src,(long)iVar2);
    auStack_17c[iVar2] = 0;
  }
  uStack_68 = *(undefined8 *)(param_2 + 0x188);
  local_78 = *(undefined8 *)(param_2 + 0x178);
  local_70 = *(undefined8 *)(param_2 + 0x180);
  uStack_58 = (undefined6)((ulong)*(undefined8 *)(param_2 + 0x196) >> 0x10);
  uStack_60 = (undefined6)*(undefined8 *)(param_2 + 400);
  local_5a = (undefined2)((ulong)*(undefined8 *)(param_2 + 400) >> 0x30);
  local_190 = &PTR_LAB_048f9a70;
  FUN_03c2d910(param_1,0,&local_190,0);
  FUN_03c2d910(param_1,1,&local_190,0);
  FUN_03c29f30(param_1,&local_198);
  return;
}

