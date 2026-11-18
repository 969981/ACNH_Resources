
/* WARNING: Removing unreachable block (ram,0x03459da0) */

void FUN_03459d70(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar8 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc7278), (uVar3 & 1) != 0)) {
    if (0 < *(int *)(puVar8 + 0x43)) {
      lVar4 = 0;
      puVar6 = (undefined8 *)puVar8[0x45];
      do {
        puVar7 = *(undefined8 **)(puVar8[0x44] + lVar4 * 8);
        lVar4 = lVar4 + 1;
        *puVar7 = puVar6;
        puVar8[0x45] = puVar7;
        puVar6 = puVar7;
      } while (lVar4 < *(int *)(puVar8 + 0x43));
    }
    *(undefined4 *)(puVar8 + 0x43) = 0;
    puVar1 = PTR_DAT_04bb32e0;
    *(undefined1 *)((long)puVar8 + 0x239) = 0;
    bVar5 = *puVar1;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    *(byte *)(puVar8 + 0x47) = bVar5;
  }
  return;
}

