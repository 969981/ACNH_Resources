
void FUN_032e4b30(undefined4 *param_1,uint param_2,undefined8 *param_3)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ushort *puVar10;
  ulong uVar11;
  void *__dest;
  ushort *puVar12;
  void *__src;
  undefined *local_128;
  ushort *puStack_120;
  ushort local_112 [97];
  
  switch(param_2) {
  case 0:
    FUN_032e9050(param_1,param_3);
    break;
  case 1:
    FUN_032eb5f0(param_1,*(undefined1 *)param_3);
    break;
  case 2:
    if (param_1[0x24c] == 2) {
      bVar5 = *(char *)(param_3 + 1) != '\0';
    }
    else {
      bVar5 = false;
    }
    FUN_032ecc90(param_1,*param_3,bVar5);
    break;
  case 3:
    FUN_032e8dd0(param_1);
    break;
  case 4:
    FUN_032ea480(param_1,*(undefined1 *)param_3);
    break;
  case 5:
    FUN_032eade0(param_1,*(undefined1 *)param_3,*(undefined1 *)((long)param_3 + 1),
                 *(undefined1 *)((long)param_3 + 2));
    break;
  case 6:
    FUN_032eb300(param_1);
    break;
  case 7:
    FUN_032ebd40(param_1);
    break;
  case 8:
    FUN_032ebff0(param_1);
    break;
  case 9:
    FUN_032ec610(param_1);
    break;
  case 10:
    FUN_032ec300(param_1);
    break;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
    plVar6 = *(long **)(param_1 + 0x214);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))(plVar6,param_2 - 0xb);
    }
    break;
  case 0xf:
    FUN_032eab40(param_1,*(undefined1 *)param_3);
    break;
  case 0x10:
    *(undefined1 *)(param_1 + 0x1a4) = 0;
    break;
  case 0x11:
    FUN_032ec970(param_1);
    break;
  case 0x12:
    *(undefined1 *)(param_1 + 0x1a4) = 1;
    break;
  case 0x13:
    FUN_032ebc24(param_1);
    break;
  case 0x14:
    FUN_032ecb10(param_1,param_3);
    break;
  case 0x15:
    plVar6 = *(long **)(param_1 + 0x214);
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      uVar7 = 0;
LAB_032e4cb8:
      (**(code **)(lVar8 + 0x10))(plVar6,uVar7);
    }
    break;
  case 0x16:
    plVar6 = *(long **)(param_1 + 0x214);
    if (plVar6 != (long *)0x0) {
      lVar8 = *plVar6;
      uVar7 = 1;
      goto LAB_032e4cb8;
    }
    break;
  case 0x18:
    FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
    __dest = *(void **)(param_1 + 0x1de);
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    __src = *(void **)(param_1 + 0x1a8);
    if (__dest != __src) {
      (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
      lVar8 = 0;
      do {
        if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar8 * 2) == 0) goto LAB_032e4d74;
        lVar9 = *(long *)(param_1 + 0x1a8) + lVar8 * 2;
        if (*(short *)(lVar9 + 2) == 0) {
          lVar8 = lVar8 + 1;
          goto LAB_032e4d74;
        }
        if (*(short *)(lVar9 + 4) == 0) {
          lVar8 = lVar8 + 2;
          goto LAB_032e4d74;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_032e4d74:
      uVar2 = (uint)lVar8;
      if ((int)param_1[0x1e0] <= (int)(uint)lVar8) {
        uVar2 = param_1[0x1e0] - 1;
      }
      uVar11 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
      memcpy(__dest,__src,uVar11);
      *(undefined2 *)((long)__dest + uVar11) = 0;
    }
    param_1[1] = *param_1;
    FUN_03363ed0(param_1 + 0x11e,*(undefined8 *)(param_1 + 0x11a));
    param_1[0x185] = param_1[0x183];
    param_1[0x186] = param_1[0x184];
  }
  lVar8 = DAT_05355a60;
  if (0x17 < param_2) goto LAB_032e50fc;
  if ((1 << (ulong)(param_2 & 0x1f) & 0x8f87fbU) == 0) {
    if (((param_2 != 2) || (lVar8 = *(long *)(DAT_05355a60 + 0x20), *(int *)(lVar8 + 0x1050) == 1))
       || ((*(char *)(lVar8 + 0x106a) == '\0' &&
           (*(char *)(lVar8 + 0x16408) == '\0' || *(int *)(lVar8 + 0x1568) != 0))))
    goto LAB_032e50fc;
    lVar9 = *(long *)(lVar8 + 0x520);
    *(undefined2 *)(lVar9 + 0x177c) = 0x100;
    *(undefined8 *)(lVar9 + 0xdf8) = 0;
    *(undefined2 *)(lVar8 + 0x16406) = 0;
    *(undefined4 *)(lVar8 + 0x1a68) = 0xffffffff;
  }
  else {
    lVar9 = *(long *)(DAT_05355a60 + 0x20);
    if (*(int *)(lVar9 + 0x1050) == 1) {
      bVar5 = false;
joined_r0x032e4e40:
      if ((param_2 != 3) && (!bVar5)) goto LAB_032e50fc;
    }
    else if (*(char *)(lVar9 + 0x106a) == '\0') {
      bVar5 = *(char *)(lVar9 + 0x16408) != '\0' && *(int *)(lVar9 + 0x1568) == 0;
      goto joined_r0x032e4e40;
    }
    FUN_032e7fd0(param_1,local_112,0x61);
    lVar9 = 0;
    do {
      uVar4 = *(ushort *)((long)local_112 + lVar9);
      if (uVar4 == 0) break;
      uVar1 = uVar4 - 0x60;
      if (0x52 < uVar4 - 0x30a1) {
        uVar1 = uVar4;
      }
      *(ushort *)((long)local_112 + lVar9) = uVar1;
      lVar9 = lVar9 + 2;
    } while (lVar9 != 0xc2);
    lVar9 = 0;
    puVar12 = local_112 + 1;
    do {
      if (puVar12[-1] == 0) {
LAB_032e4ed0:
        if ((int)lVar9 != 0) goto LAB_032e4efc;
        break;
      }
      if (*puVar12 == 0) {
        lVar9 = lVar9 + 1;
        goto LAB_032e4ed0;
      }
      if (puVar12[1] == 0) {
        if ((int)lVar9 != -2) goto LAB_032e4efc;
        break;
      }
      lVar9 = lVar9 + 3;
      puVar12 = puVar12 + 3;
    } while (lVar9 != 0x80001);
    if ((param_2 == 4) || (param_2 == 0xf)) goto LAB_032e50fc;
    if (param_2 == 0x17) {
LAB_032e4efc:
      cVar3 = *(char *)(param_1 + 0x1a4);
      (**(code **)(*(long *)(param_1 + 0x216) + 0x18))(param_1 + 0x216);
      (**(code **)(*(long *)(param_1 + 0x216) + 0x18))(param_1 + 0x216);
      if (*(ushort **)(param_1 + 0x218) == local_112) {
        if (*(char *)(param_1 + 0x24d) == cVar3) {
LAB_032e504c:
          if (param_2 != 0x17) goto LAB_032e50fc;
        }
      }
      else {
        uVar11 = 0;
        bVar5 = true;
        do {
          uVar4 = (*(ushort **)(param_1 + 0x218))[uVar11];
          if (uVar4 != local_112[uVar11]) break;
          if (uVar4 == 0) {
            if ((bool)(bVar5 & *(char *)(param_1 + 0x24d) == cVar3)) goto LAB_032e504c;
            break;
          }
          bVar5 = uVar11 < 0x80000;
          uVar11 = uVar11 + 1;
        } while (uVar11 != 0x80001);
      }
      local_128 = PTR_DAT_04bb8610 + 0x10;
      puStack_120 = local_112;
      FUN_03302930(*(undefined8 *)(lVar8 + 0x20),&local_128,cVar3 != '\0');
      puVar12 = *(ushort **)(param_1 + 0x218);
      if (puVar12 != local_112) {
        lVar8 = 0;
        puVar10 = local_112 + 1;
        do {
          if (puVar10[-1] == 0) goto LAB_032e50d0;
          if (*puVar10 == 0) {
            lVar8 = lVar8 + 1;
            goto LAB_032e50d0;
          }
          if (puVar10[1] == 0) {
            lVar8 = lVar8 + 2;
            goto LAB_032e50d0;
          }
          lVar8 = lVar8 + 3;
          puVar10 = puVar10 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_032e50d0:
        uVar2 = (uint)lVar8;
        if ((int)param_1[0x21a] <= (int)(uint)lVar8) {
          uVar2 = param_1[0x21a] - 1;
        }
        uVar11 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
        memcpy(puVar12,local_112,uVar11);
        *(undefined2 *)((long)puVar12 + uVar11) = 0;
      }
      *(char *)(param_1 + 0x24d) = cVar3;
      goto LAB_032e50fc;
    }
    lVar8 = *(long *)(lVar8 + 0x20);
    lVar9 = *(long *)(lVar8 + 0x520);
    *(undefined2 *)(lVar9 + 0x177c) = 0x100;
    *(undefined8 *)(lVar9 + 0xdf8) = 0;
    *(undefined4 *)(lVar8 + 0x1a68) = 0xffffffff;
    *(undefined2 *)(lVar8 + 0x16406) = 0;
  }
  if ((*(long *)(lVar8 + 0x6e0) != 0) && (*(long *)(*(long *)(lVar8 + 0x6e0) + 8) != 0)) {
    FUN_03321ed0();
  }
  **(undefined2 **)(param_1 + 0x218) = 0;
LAB_032e50fc:
  FUN_032e7c40(param_1);
  param_1[0x24c] = param_2;
  return;
}

