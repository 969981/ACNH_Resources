
/* WARNING: Removing unreachable block (ram,0x031a2000) */

void FUN_031a1eac(long param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  
  *(undefined1 *)(*(long *)(param_1 + 0x2f8) + 0x28) = 1;
  *(undefined1 *)
   (*(long *)(param_1 + 0x2f8) + (ulong)(1 < *(uint *)(param_1 + 0x2f0)) * 0x30 + 0x28) = 1;
  lVar1 = 0x90;
  if (*(uint *)(param_1 + 0x2f0) < 4) {
    lVar1 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x2f8) + lVar1 + 0x28) = 1;
  lVar1 = 0x90;
  if (*(uint *)(param_1 + 0x2f0) < 4) {
    lVar1 = 0;
  }
  if (*(char *)(*(long *)(param_1 + 0x2f8) + lVar1 + 0x28) != '\0') {
    uVar4 = (**(code **)(*param_2 + 0x80))(param_2);
    if ((uVar4 & 1) == 0) {
      puVar6 = &DAT_040a29db;
    }
    else {
      uVar4 = (**(code **)(*param_2 + 0x68))(param_2);
      puVar6 = &DAT_040a29db;
      if ((uVar4 & 1) == 0) {
        uVar4 = (**(code **)(*param_2 + 0x90))(param_2);
        puVar6 = &DAT_040a29db;
        if ((uVar4 & 1) == 0) {
          puVar6 = &DAT_040eb572;
        }
      }
    }
    lVar1 = 0x90;
    if (*(uint *)(param_1 + 0x2f0) < 4) {
      lVar1 = 0;
    }
    *(undefined **)(*(long *)(param_1 + 0x2f8) + lVar1) = puVar6;
  }
  bVar2 = (**(code **)(*param_2 + 0x60))(param_2);
  lVar1 = 0x60;
  if (*(uint *)(param_1 + 0x2f0) < 3) {
    lVar1 = 0;
  }
  *(byte *)(*(long *)(param_1 + 0x2f8) + lVar1 + 0x28) = bVar2 & 1;
  FUN_03440390(param_1 + 0x2f0,param_1 + 0x1f8);
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar5 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7278), (uVar4 & 1) != 0)) {
    *(byte *)((long)puVar5 + 0x239) = *(byte *)((long)puVar5 + 0x239) | 1;
  }
  return;
}

