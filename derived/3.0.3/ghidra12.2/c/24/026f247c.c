
/* WARNING: Removing unreachable block (ram,0x026f277c) */

void FUN_026f247c(long param_1,uint param_2)

{
  uint *puVar1;
  bool bVar2;
  long lVar3;
  
  if ((((((*(int *)(param_1 + 0x94) != 1 || *(uint *)(param_1 + 0x90) != param_2) &&
         ((*(int *)(param_1 + 0x9c) != 1 || (*(uint *)(param_1 + 0x98) != param_2)))) &&
        ((*(int *)(param_1 + 0xa4) != 1 || (*(uint *)(param_1 + 0xa0) != param_2)))) &&
       ((((*(int *)(param_1 + 0xac) != 1 || (*(uint *)(param_1 + 0xa8) != param_2)) &&
         ((*(int *)(param_1 + 0xb4) != 1 || (*(uint *)(param_1 + 0xb0) != param_2)))) &&
        ((*(int *)(param_1 + 0xbc) != 1 || (*(uint *)(param_1 + 0xb8) != param_2)))))) &&
      ((*(int *)(param_1 + 0xc4) != 1 || (*(uint *)(param_1 + 0xc0) != param_2)))) &&
     ((*(int *)(param_1 + 0xcc) != 1 || (*(uint *)(param_1 + 200) != param_2)))) {
    if (*(int *)(param_1 + 0x94) == 2) {
      lVar3 = 0;
    }
    else if (*(int *)(param_1 + 0x9c) == 2) {
      lVar3 = 1;
    }
    else if (*(int *)(param_1 + 0xa4) == 2) {
      lVar3 = 2;
    }
    else if (*(int *)(param_1 + 0xac) == 2) {
      lVar3 = 3;
    }
    else if (*(int *)(param_1 + 0xb4) == 2) {
      lVar3 = 4;
    }
    else if (*(int *)(param_1 + 0xbc) == 2) {
      lVar3 = 5;
    }
    else if (*(int *)(param_1 + 0xc4) == 2) {
      lVar3 = 6;
    }
    else {
      if (*(int *)(param_1 + 0xcc) != 2) goto LAB_026f25c8;
      lVar3 = 7;
    }
    if (param_2 < 8) {
      puVar1 = (uint *)(param_1 + 0x90) + lVar3 * 2;
      *puVar1 = param_2;
      puVar1[1] = 1;
    }
  }
LAB_026f25c8:
  if (((((*(int *)(param_1 + 0xd4) != 1 || *(uint *)(param_1 + 0xd0) != param_2) &&
        ((*(int *)(param_1 + 0xdc) != 1 || (*(uint *)(param_1 + 0xd8) != param_2)))) &&
       ((*(int *)(param_1 + 0xe4) != 1 || (*(uint *)(param_1 + 0xe0) != param_2)))) &&
      ((((*(int *)(param_1 + 0xec) != 1 || (*(uint *)(param_1 + 0xe8) != param_2)) &&
        ((*(int *)(param_1 + 0xf4) != 1 || (*(uint *)(param_1 + 0xf0) != param_2)))) &&
       ((*(int *)(param_1 + 0xfc) != 1 || (*(uint *)(param_1 + 0xf8) != param_2)))))) &&
     (((*(int *)(param_1 + 0x104) != 1 || (*(uint *)(param_1 + 0x100) != param_2)) &&
      ((*(int *)(param_1 + 0x10c) != 1 || (*(uint *)(param_1 + 0x108) != param_2)))))) {
    if (*(int *)(param_1 + 0xd4) == 2) {
      lVar3 = 0;
    }
    else if (*(int *)(param_1 + 0xdc) == 2) {
      lVar3 = 1;
    }
    else if (*(int *)(param_1 + 0xe4) == 2) {
      lVar3 = 2;
    }
    else if (*(int *)(param_1 + 0xec) == 2) {
      lVar3 = 3;
    }
    else if (*(int *)(param_1 + 0xf4) == 2) {
      lVar3 = 4;
    }
    else if (*(int *)(param_1 + 0xfc) == 2) {
      lVar3 = 5;
    }
    else if (*(int *)(param_1 + 0x104) == 2) {
      lVar3 = 6;
    }
    else {
      if (*(int *)(param_1 + 0x10c) != 2) goto LAB_026f2714;
      lVar3 = 7;
    }
    if (7 < param_2) {
      bVar2 = false;
      goto LAB_026f275c;
    }
    puVar1 = (uint *)(param_1 + 0xd0) + lVar3 * 2;
    *puVar1 = param_2;
    puVar1[1] = 1;
  }
LAB_026f2714:
  bVar2 = param_2 < 8;
  if ((param_2 < 8) && (*(int *)(param_1 + 0x114) == 2)) {
    *(uint *)(param_1 + 0x110) = param_2;
    *(undefined4 *)(param_1 + 0x114) = 1;
  }
  if ((param_2 < 8) && (*(int *)(param_1 + 0x11c) == 2)) {
    *(uint *)(param_1 + 0x118) = param_2;
    *(undefined4 *)(param_1 + 0x11c) = 1;
  }
LAB_026f275c:
  if (((*(byte *)(param_1 + 0x50d) ^ 0xff) & 6) == 0) {
    bVar2 = (bool)(bVar2 ^ 1);
    if (*(int *)(param_1 + 0x124) != 2) {
      bVar2 = true;
    }
    if (!bVar2) {
      *(uint *)(param_1 + 0x120) = param_2;
      *(undefined4 *)(param_1 + 0x124) = 1;
    }
  }
  return;
}

