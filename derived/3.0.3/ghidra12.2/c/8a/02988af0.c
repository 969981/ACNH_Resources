
/* WARNING: Removing unreachable block (ram,0x02988c88) */

void FUN_02988af0(undefined8 param_1,long param_2,byte *param_3)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  uint local_7cc;
  undefined4 local_7c8;
  byte local_7c4 [4];
  undefined *local_7c0;
  undefined1 auStack_7b8 [1876];
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  
  if (param_2 == 0) {
    return;
  }
  local_7c0 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7b8,0,0x754);
  uVar3 = nn::os::GetSystemTick();
  local_64 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 1;
  local_60 = (local_64 ^ local_64 >> 0x1e) * 0x6c078965 + 2;
  local_5c = (local_60 ^ local_60 >> 0x1e) * 0x6c078965 + 3;
  local_58 = (local_5c ^ local_5c >> 0x1e) * 0x6c078965 + 4;
  pvVar5 = (void *)FUN_01a451fc(&local_7c0);
  memset(pvVar5,0,0x754);
  local_7c4[0] = *param_3;
  if (7 < local_7c4[0]) {
    local_7c4[0] = 0xff;
  }
  lVar6 = FUN_02583354(DAT_055021a0,local_7c4,1);
  if (lVar6 == 0) goto LAB_02988c68;
  lVar8 = lVar6 + 0x194b0;
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar8 = *(long *)(DAT_05574040 + 0x20);
    plVar9 = *(long **)(lVar8 + 0x1090);
    if (plVar9 != (long *)0x0) goto LAB_02988c08;
LAB_02988c4c:
    pvVar5 = (void *)(*(long *)(lVar8 + 0x1078) + *(long *)(lVar8 + 0x1070));
  }
  else {
    plVar9 = *(long **)(lVar6 + 0x1a540);
    if (plVar9 == (long *)0x0) goto LAB_02988c4c;
LAB_02988c08:
    if ((undefined8 *)*plVar9 == (undefined8 *)0x0) goto LAB_02988c4c;
    uVar11 = (*(code *)**(undefined8 **)*plVar9)();
    pvVar5 = (void *)(*(long *)(lVar8 + 0x1078) + *(long *)(lVar8 + 0x1070));
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar8 + 0x1090) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x1090) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  memcpy(auStack_7b8,pvVar5,0x754);
LAB_02988c68:
  lVar6 = DAT_0532a840;
  puVar2 = PTR_DAT_04bb37e0;
  piVar1 = (int *)(DAT_0532a840 + 0xe40);
  uVar3 = *(uint *)(DAT_0532a840 + 0xe44);
  if (0 < (int)uVar3) {
    uVar11 = 0;
    do {
      if ((*piVar1 == 0) || ((long)*(int *)(lVar6 + 0xe44) <= (long)uVar11)) {
        local_7cc = *(uint *)puVar2;
        local_7c8 = *(undefined4 *)(puVar2 + 4);
      }
      else {
        local_7c8 = 0;
        local_7cc = **(uint **)(*(long *)(lVar6 + 0xe48) + uVar11 * 8) & 0xffff;
        FUN_0277d4ac(&local_7cc);
      }
      lVar8 = (**(code **)(local_7c0 + 0x20))(&local_7c0);
      uVar4 = FUN_0277d6c4(&local_7cc);
      if (((uVar4 >> 3 & 0x1fff) < 0x753) &&
         ((*(uint *)(lVar8 + (ulong)((uVar4 & 0xffff) >> 5) * 4) >> (ulong)(uVar4 & 0x1f) & 1) != 0)
         ) {
        if (0x7f < uVar11) {
          return;
        }
        uVar10 = uVar11 >> 3 & 0x1ffffffffffffffc;
        *(uint *)(param_2 + uVar10) =
             *(uint *)(param_2 + uVar10) | 1 << (ulong)((uint)uVar11 & 0x1f);
      }
      uVar11 = uVar11 + 1;
    } while (uVar3 != uVar11);
  }
  return;
}

