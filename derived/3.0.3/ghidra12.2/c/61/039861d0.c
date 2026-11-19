
void FUN_039861d0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined *__dest;
  undefined *puVar8;
  undefined1 *__dest_00;
  undefined1 *puVar9;
  undefined1 auStack_468 [1048];
  
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
  puVar8 = (undefined *)param_3[1];
  (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
  if (puVar8 == PTR_DAT_04c4b988) {
LAB_03986280:
    __dest = *(undefined **)(param_1 + 0x10);
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    puVar8 = PTR_DAT_04c4b988;
    if (__dest == PTR_DAT_04c4b988) goto LAB_03986474;
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    lVar6 = 0;
    do {
      if (PTR_DAT_04c4b988[lVar6] == '\0') goto LAB_03986448;
      if (PTR_DAT_04c4b988[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03986448;
      }
      if (PTR_DAT_04c4b988[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_03986448;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_03986448:
    iVar4 = (int)lVar6;
    if (*(int *)(param_1 + 0x18) <= (int)lVar6) {
      iVar4 = *(int *)(param_1 + 0x18) + -1;
    }
    memcpy(__dest,puVar8,(long)iVar4);
    puVar9 = __dest + iVar4;
  }
  else {
    uVar7 = 0;
    bVar5 = true;
    do {
      if (*(char *)(param_3[1] + uVar7) != PTR_DAT_04c4b988[uVar7]) break;
      if (*(char *)(param_3[1] + uVar7) == '\0') {
        if (bVar5) goto LAB_03986280;
        break;
      }
      bVar5 = uVar7 < 0x80000;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x80001);
    __dest_00 = *(undefined1 **)(param_1 + 0x10);
    puVar9 = &DAT_0408f28c;
    if (__dest_00 != &DAT_0408f28c) {
      iVar4 = *(int *)(param_1 + 0x18) + -1;
      if (iVar4 != 0 && 0 < *(int *)(param_1 + 0x18)) {
        iVar4 = 1;
      }
      memcpy(__dest_00,&DAT_0408f28c,(long)iVar4);
      __dest_00[iVar4] = 0;
      puVar9 = *(undefined1 **)(param_1 + 0x10);
    }
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x10) + lVar6) == '\0') goto LAB_0398638c;
      lVar1 = *(long *)(param_1 + 0x10) + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0398638c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0398638c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0398638c:
    uVar2 = (uint)lVar6 & ((int)(uint)lVar6 >> 0x1f ^ 0xffffffffU);
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar6 = 0;
    do {
      if (*(char *)(param_3[1] + lVar6) == '\0') goto LAB_039863ec;
      lVar1 = param_3[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_039863ec;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_039863ec;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_039863ec:
    uVar3 = (uint)lVar6;
    if ((int)(*(int *)(param_1 + 0x18) - uVar2) <= (int)(uint)lVar6) {
      uVar3 = *(int *)(param_1 + 0x18) + ~uVar2;
    }
    if ((int)uVar3 < 1) goto LAB_03986474;
    (**(code **)(*param_3 + 0x18))(param_3);
    memcpy(puVar9 + uVar2,(void *)param_3[1],(ulong)uVar3);
    puVar9 = puVar9 + (int)(uVar3 + uVar2);
  }
  *puVar9 = 0;
LAB_03986474:
  lVar6 = DAT_05ae9300;
  if ((DAT_05ae9300 != 0) && (*(long *)(DAT_05ae92f0 + 0x58) != 0)) {
    (**(code **)(*(long *)(DAT_05ae9300 + 8) + 0x18))((long *)(DAT_05ae9300 + 8));
    FUN_006e9454(auStack_468,&DAT_0406a3d7,"Icon = DRAW, Order = -1",*(undefined8 *)(lVar6 + 0x10));
  }
  return;
}

