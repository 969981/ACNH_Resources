
/* WARNING: Removing unreachable block (ram,0x02687378) */

void FUN_026872b0(undefined8 *param_1)

{
  uint uVar1;
  void *__s;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar5 = param_1 + 1;
  *param_1 = &PTR_LAB_049ff3a8;
  memset(puVar5,0,0x754);
  uVar1 = nn::os::GetSystemTick();
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)param_1 + 0x75c) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(param_1 + 0xec) = uVar1;
  uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)param_1 + 0x764) = uVar1;
  *(uint *)(param_1 + 0xed) = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(param_1);
  memset(__s,0,0x754);
  if (((DAT_05574040 != 0) && (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0)) &&
     (lVar2 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
     lVar2 != 0)) {
    if ((*(long **)(&DAT_005d3e28 + lVar2) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(&DAT_005d3e28 + lVar2), puVar3 == (undefined8 *)0x0)) {
      memcpy(puVar5,(void *)(*(long *)(lVar2 + 0x5d3e10) + *(long *)(lVar2 + 0x5d3e08)),0x754);
      return;
    }
    uVar4 = (**(code **)*puVar3)();
    memcpy(puVar5,(void *)(*(long *)(lVar2 + 0x5d3e10) + *(long *)(lVar2 + 0x5d3e08)),0x754);
    if ((((uVar4 & 1) != 0) && (*(long *)(&DAT_005d3e28 + lVar2) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(&DAT_005d3e28 + lVar2) + 8), puVar5 != (undefined8 *)0x0
       )) {
                    /* WARNING: Could not recover jumptable at 0x02687404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar5)();
      return;
    }
  }
  return;
}

