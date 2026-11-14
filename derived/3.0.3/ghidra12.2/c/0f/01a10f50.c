
uint FUN_01a10f50(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined2 local_60;
  undefined2 local_5e;
  undefined4 local_5c;
  undefined1 auStack_58 [24];
  
  if (param_1 == 0) {
LAB_01a11080:
    uVar1 = 0;
    goto LAB_01a111d4;
  }
  if (DAT_052d2598 == 0) {
    puVar8 = *(undefined **)(param_1 + 8);
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    puVar5 = PTR_DAT_04c4b988;
    if (puVar8 == PTR_DAT_04c4b988) goto LAB_01a11080;
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    lVar6 = 0;
    do {
      if (PTR_DAT_04c4b988[lVar6] == '\0') goto LAB_01a111a8;
      if (PTR_DAT_04c4b988[lVar6 + 1] == '\0') goto LAB_01a1119c;
      if (PTR_DAT_04c4b988[lVar6 + 2] == '\0') goto LAB_01a111a4;
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
  }
  else {
    if (((param_2 != 0xfffe) && (*(undefined8 **)(DAT_052d2598 + 0x20) != (undefined8 *)0x0)) &&
       (*(int *)(DAT_052d2598 + 0x18) != 0)) {
      puVar9 = (undefined8 *)**(undefined8 **)(DAT_052d2598 + 0x20);
      if (((DAT_052d2590 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052d2590), iVar2 != 0)) {
        DAT_052d2588 = &PTR_LAB_049fa588;
        __cxa_guard_release(&DAT_052d2590);
      }
      if (((puVar9 != (undefined8 *)0x0) &&
          (uVar3 = (**(code **)*puVar9)(puVar9,&DAT_052d2588), (uVar3 & 1) != 0)) &&
         ((uVar1 = (param_2 & 0xffff) - (uint)*(ushort *)(puVar9 + 0x3f),
          uVar1 < *(uint *)(puVar9 + 0x3b) &&
          (lVar6 = *(long *)(puVar9[0x3c] + (long)(int)uVar1 * 8), lVar6 != 0)))) {
        local_5e = 0;
        local_5c = 0;
        local_60 = (short)param_2;
        FUN_0277d4ac(&local_60);
        FUN_01ad5d04(auStack_58,&local_60);
        uVar1 = FUN_01af875c(auStack_58);
        if ((uVar1 & 1) == 0) {
          puVar8 = *(undefined **)(param_1 + 8);
          (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
          puVar5 = PTR_DAT_04c4b988;
          if (puVar8 == PTR_DAT_04c4b988) goto LAB_01a111d4;
          (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
          lVar6 = 0;
          do {
            if (PTR_DAT_04c4b988[lVar6] == '\0') goto LAB_01a1128c;
            if (PTR_DAT_04c4b988[lVar6 + 1] == '\0') {
              lVar6 = lVar6 + 1;
              goto LAB_01a1128c;
            }
            if (PTR_DAT_04c4b988[lVar6 + 2] == '\0') {
              lVar6 = lVar6 + 2;
              goto LAB_01a1128c;
            }
            lVar6 = lVar6 + 3;
          } while (lVar6 != 0x80001);
          lVar6 = 0;
LAB_01a1128c:
          iVar2 = (int)lVar6;
          iVar7 = *(int *)(param_1 + 0x10);
        }
        else {
          puVar4 = (undefined *)FUN_018aaa70(lVar6,0xb,0x87bf00e8,*(undefined8 *)PTR_DAT_04bbec90);
          puVar8 = *(undefined **)(param_1 + 8);
          puVar5 = *(undefined **)PTR_PTR_04bbec98;
          if (puVar4 != (undefined *)0x0) {
            puVar5 = puVar4;
          }
          if (puVar8 == puVar5) goto LAB_01a111d4;
          lVar6 = 0;
          do {
            if (puVar5[lVar6] == '\0') goto LAB_01a1127c;
            if (puVar5[lVar6 + 1] == '\0') {
              lVar6 = lVar6 + 1;
              goto LAB_01a1127c;
            }
            if (puVar5[lVar6 + 2] == '\0') {
              lVar6 = lVar6 + 2;
              goto LAB_01a1127c;
            }
            lVar6 = lVar6 + 3;
          } while (lVar6 != 0x80001);
          lVar6 = 0;
LAB_01a1127c:
          iVar2 = (int)lVar6;
          iVar7 = *(int *)(param_1 + 0x10);
        }
        if (iVar7 <= iVar2) {
          iVar2 = iVar7 + -1;
        }
        memcpy(puVar8,puVar5,(long)iVar2);
        puVar8[iVar2] = 0;
        goto LAB_01a111d4;
      }
    }
    puVar8 = *(undefined **)(param_1 + 8);
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    puVar5 = PTR_DAT_04c4b988;
    if (puVar8 == PTR_DAT_04c4b988) goto LAB_01a11080;
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    lVar6 = 0;
    do {
      if (PTR_DAT_04c4b988[lVar6] == '\0') goto LAB_01a111a8;
      if (PTR_DAT_04c4b988[lVar6 + 1] == '\0') goto LAB_01a1119c;
      if (PTR_DAT_04c4b988[lVar6 + 2] == '\0') goto LAB_01a111a4;
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
  }
  lVar6 = 0;
  goto LAB_01a111a8;
LAB_01a1119c:
  lVar6 = lVar6 + 1;
  goto LAB_01a111a8;
LAB_01a111a4:
  lVar6 = lVar6 + 2;
LAB_01a111a8:
  iVar2 = (int)lVar6;
  if (*(int *)(param_1 + 0x10) <= (int)lVar6) {
    iVar2 = *(int *)(param_1 + 0x10) + -1;
  }
  memcpy(puVar8,puVar5,(long)iVar2);
  uVar1 = 0;
  puVar8[iVar2] = 0;
LAB_01a111d4:
  return uVar1 & 1;
}

