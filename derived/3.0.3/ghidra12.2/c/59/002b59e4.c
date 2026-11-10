
void FUN_002b59e4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined1 auStack_bdc [4];
  undefined1 auStack_bd8 [4];
  int local_bd4 [4];
  uint local_bc4;
  undefined *local_bc0;
  undefined2 local_bb8;
  undefined1 local_bb6;
  uint local_bb0;
  undefined1 auStack_bac [1440];
  uint local_60c [360];
  uint local_6c;
  undefined1 auStack_68 [4];
  undefined1 auStack_64 [4];
  
  if (((*(long *)(param_1 + 0x70) == 0) || (lVar7 = FUN_002aaa28(param_1), lVar7 == 0)) ||
     (uVar8 = FUN_002aed20(*(undefined8 *)(param_1 + 0x70)), (uVar8 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0xffff;
    *(undefined8 *)(param_1 + 0xbc) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined2 *)(param_1 + 0xd0) = 0;
    *(undefined1 *)(param_1 + 0xd2) = 0;
    memset((void *)(param_1 + 0x94),0xff,0x20);
    return;
  }
  memset(local_60c,0,4);
  if (*(char *)(param_1 + 0xd3) != '\0') {
    local_60c[0] = local_60c[0] | 1;
  }
  if (*(char *)(param_1 + 0xd4) != '\0') {
    local_60c[0] = local_60c[0] | 2;
  }
  if (*(char *)(param_1 + 0xd5) != '\0') {
    local_60c[0] = local_60c[0] | 4;
  }
  if (*(char *)(param_1 + 0xd6) != '\0') {
    local_60c[0] = local_60c[0] | 8;
  }
  if (*(char *)(param_1 + 0xd7) != '\0') {
    local_60c[0] = local_60c[0] | 0x10;
  }
  if (*(char *)(param_1 + 0xd8) != '\0') {
    local_60c[0] = local_60c[0] | 0x20;
  }
  if (*(char *)(param_1 + 0xd9) != '\0') {
    local_60c[0] = local_60c[0] | 0x40;
  }
  if (*(char *)(param_1 + 0xda) != '\0') {
    local_60c[0] = local_60c[0] | 0x80;
  }
  if (*(char *)(param_1 + 0xdb) != '\0') {
    local_60c[0] = local_60c[0] | 0x100;
  }
  if (*(char *)(param_1 + 0xdc) != '\0') {
    local_60c[0] = local_60c[0] | 0x200;
  }
  if (*(char *)(param_1 + 0xdd) != '\0') {
    local_60c[0] = local_60c[0] | 0x400;
  }
  if (*(char *)(param_1 + 0xde) != '\0') {
    local_60c[0] = local_60c[0] | 0x800;
  }
  if (*(char *)(param_1 + 0xdf) != '\0') {
    local_60c[0] = local_60c[0] | 0x1000;
  }
  if (*(char *)(param_1 + 0xe0) != '\0') {
    local_60c[0] = local_60c[0] | 0x2000;
  }
  if (*(char *)(param_1 + 0xe1) != '\0') {
    local_60c[0] = local_60c[0] | 0x4000;
  }
  if (*(char *)(param_1 + 0xe2) != '\0') {
    local_60c[0] = local_60c[0] | 0x8000;
  }
  if (*(char *)(param_1 + 0xe3) != '\0') {
    local_60c[0] = local_60c[0] | 0x10000;
  }
  if (*(char *)(param_1 + 0xe4) != '\0') {
    local_60c[0] = local_60c[0] | 0x20000;
  }
  if (*(char *)(param_1 + 0xe5) != '\0') {
    local_60c[0] = local_60c[0] | 0x40000;
  }
  if (*(char *)(param_1 + 0xe6) != '\0') {
    local_60c[0] = local_60c[0] | 0x80000;
  }
  if (*(char *)(param_1 + 0xe7) != '\0') {
    local_60c[0] = local_60c[0] | 0x100000;
  }
  if (*(char *)(param_1 + 0xe8) != '\0') {
    local_60c[0] = local_60c[0] | 0x200000;
  }
  if (*(char *)(param_1 + 0xe9) != '\0') {
    local_60c[0] = local_60c[0] | 0x400000;
  }
  if (*(char *)(param_1 + 0xea) != '\0') {
    local_60c[0] = local_60c[0] | 0x800000;
  }
  if (*(char *)(param_1 + 0xeb) != '\0') {
    local_60c[0] = local_60c[0] | 0x1000000;
  }
  if (*(char *)(param_1 + 0xec) != '\0') {
    local_60c[0] = local_60c[0] | 0x2000000;
  }
  if (*(char *)(param_1 + 0xed) != '\0') {
    local_60c[0] = local_60c[0] | 0x4000000;
  }
  if (*(char *)(param_1 + 0xee) != '\0') {
    local_60c[0] = local_60c[0] | 0x8000000;
  }
  if (*(char *)(param_1 + 0xef) != '\0') {
    local_60c[0] = local_60c[0] | 0x10000000;
  }
  if (*(char *)(param_1 + 0xf0) != '\0') {
    local_60c[0] = local_60c[0] | 0x20000000;
  }
  if (*(char *)(param_1 + 0xf1) != '\0') {
    local_60c[0] = local_60c[0] | 0x40000000;
  }
  if (*(char *)(param_1 + 0xf2) != '\0') {
    local_60c[0] = local_60c[0] | 0x80000000;
  }
  memcpy(auStack_64,local_60c,4);
  FUN_002b767c(&local_bc0,param_1,auStack_64,3);
  if ((int)local_bc0 == 0) {
    *(undefined8 *)(param_1 + 0xd3) = 0;
    *(undefined8 *)(param_1 + 0xdb) = 0;
    *(undefined8 *)(param_1 + 0xe3) = 0;
    *(undefined8 *)(param_1 + 0xeb) = 0;
  }
  memset(local_60c,0,4);
  if (*(char *)(param_1 + 0xf3) != '\0') {
    local_60c[0] = local_60c[0] | 1;
  }
  if (*(char *)(param_1 + 0xf4) != '\0') {
    local_60c[0] = local_60c[0] | 2;
  }
  if (*(char *)(param_1 + 0xf5) != '\0') {
    local_60c[0] = local_60c[0] | 4;
  }
  if (*(char *)(param_1 + 0xf6) != '\0') {
    local_60c[0] = local_60c[0] | 8;
  }
  if (*(char *)(param_1 + 0xf7) != '\0') {
    local_60c[0] = local_60c[0] | 0x10;
  }
  if (*(char *)(param_1 + 0xf8) != '\0') {
    local_60c[0] = local_60c[0] | 0x20;
  }
  if (*(char *)(param_1 + 0xf9) != '\0') {
    local_60c[0] = local_60c[0] | 0x40;
  }
  if (*(char *)(param_1 + 0xfa) != '\0') {
    local_60c[0] = local_60c[0] | 0x80;
  }
  if (*(char *)(param_1 + 0xfb) != '\0') {
    local_60c[0] = local_60c[0] | 0x100;
  }
  if (*(char *)(param_1 + 0xfc) != '\0') {
    local_60c[0] = local_60c[0] | 0x200;
  }
  if (*(char *)(param_1 + 0xfd) != '\0') {
    local_60c[0] = local_60c[0] | 0x400;
  }
  if (*(char *)(param_1 + 0xfe) != '\0') {
    local_60c[0] = local_60c[0] | 0x800;
  }
  if (*(char *)(param_1 + 0xff) != '\0') {
    local_60c[0] = local_60c[0] | 0x1000;
  }
  if (*(char *)(param_1 + 0x100) != '\0') {
    local_60c[0] = local_60c[0] | 0x2000;
  }
  if (*(char *)(param_1 + 0x101) != '\0') {
    local_60c[0] = local_60c[0] | 0x4000;
  }
  if (*(char *)(param_1 + 0x102) != '\0') {
    local_60c[0] = local_60c[0] | 0x8000;
  }
  if (*(char *)(param_1 + 0x103) != '\0') {
    local_60c[0] = local_60c[0] | 0x10000;
  }
  if (*(char *)(param_1 + 0x104) != '\0') {
    local_60c[0] = local_60c[0] | 0x20000;
  }
  if (*(char *)(param_1 + 0x105) != '\0') {
    local_60c[0] = local_60c[0] | 0x40000;
  }
  if (*(char *)(param_1 + 0x106) != '\0') {
    local_60c[0] = local_60c[0] | 0x80000;
  }
  if (*(char *)(param_1 + 0x107) != '\0') {
    local_60c[0] = local_60c[0] | 0x100000;
  }
  if (*(char *)(param_1 + 0x108) != '\0') {
    local_60c[0] = local_60c[0] | 0x200000;
  }
  if (*(char *)(param_1 + 0x109) != '\0') {
    local_60c[0] = local_60c[0] | 0x400000;
  }
  if (*(char *)(param_1 + 0x10a) != '\0') {
    local_60c[0] = local_60c[0] | 0x800000;
  }
  if (*(char *)(param_1 + 0x10b) != '\0') {
    local_60c[0] = local_60c[0] | 0x1000000;
  }
  if (*(char *)(param_1 + 0x10c) != '\0') {
    local_60c[0] = local_60c[0] | 0x2000000;
  }
  if (*(char *)(param_1 + 0x10d) != '\0') {
    local_60c[0] = local_60c[0] | 0x4000000;
  }
  if (*(char *)(param_1 + 0x10e) != '\0') {
    local_60c[0] = local_60c[0] | 0x8000000;
  }
  if (*(char *)(param_1 + 0x10f) != '\0') {
    local_60c[0] = local_60c[0] | 0x10000000;
  }
  if (*(char *)(param_1 + 0x110) != '\0') {
    local_60c[0] = local_60c[0] | 0x20000000;
  }
  if (*(char *)(param_1 + 0x111) != '\0') {
    local_60c[0] = local_60c[0] | 0x40000000;
  }
  if (*(char *)(param_1 + 0x112) != '\0') {
    local_60c[0] = local_60c[0] | 0x80000000;
  }
  memcpy(auStack_68,local_60c,4);
  FUN_002b767c(&local_bc0,param_1,auStack_68,6);
  if ((int)local_bc0 == 0) {
    *(undefined8 *)(param_1 + 0xf3) = 0;
    *(undefined8 *)(param_1 + 0xfb) = 0;
    *(undefined8 *)(param_1 + 0x103) = 0;
    *(undefined8 *)(param_1 + 0x10b) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x78);
  if (iVar3 == 9) {
    local_bb0 = 0;
    local_bc0 = PTR_DAT_04bce170 + 0x10;
    local_bb8 = 0xff05;
    FUN_002b72d8(local_bd4,&local_bc0,local_60c,&local_6c,0x5a0);
    FUN_002b1480(local_bd4,*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 200),local_60c,
                 local_6c,0);
    if (local_bd4[0] != 0) {
      return;
    }
    uVar10 = 10;
    goto LAB_002b69f8;
  }
  if (iVar3 == 8) {
    local_bb0 = 0;
    local_bc0 = PTR_DAT_04bce170 + 0x10;
    local_bb8 = 0xff04;
    FUN_002b72d8(local_bd4,&local_bc0,local_60c,&local_6c,0x5a0);
    memset(&local_bc4,0,4);
    cVar4 = *(char *)(param_1 + 0xb8);
    if (*(char *)(param_1 + 0x94) == cVar4) {
      local_bc4 = local_bc4 | 1;
      if (*(char *)(param_1 + 0x95) != cVar4) goto LAB_002b61bc;
LAB_002b6344:
      local_bc4 = local_bc4 | 2;
      if (*(char *)(param_1 + 0x96) != cVar4) goto LAB_002b61c8;
LAB_002b6358:
      local_bc4 = local_bc4 | 4;
      if (*(char *)(param_1 + 0x97) != cVar4) goto LAB_002b61d4;
LAB_002b636c:
      local_bc4 = local_bc4 | 8;
      if (*(char *)(param_1 + 0x98) != cVar4) goto LAB_002b61e0;
LAB_002b6380:
      local_bc4 = local_bc4 | 0x10;
      if (*(char *)(param_1 + 0x99) != cVar4) goto LAB_002b61ec;
LAB_002b6394:
      local_bc4 = local_bc4 | 0x20;
      if (*(char *)(param_1 + 0x9a) != cVar4) goto LAB_002b61f8;
LAB_002b63a8:
      local_bc4 = local_bc4 | 0x40;
      if (*(char *)(param_1 + 0x9b) != cVar4) goto LAB_002b6204;
LAB_002b63bc:
      local_bc4 = local_bc4 | 0x80;
      if (*(char *)(param_1 + 0x9c) != cVar4) goto LAB_002b6210;
LAB_002b63d0:
      local_bc4 = local_bc4 | 0x100;
      if (*(char *)(param_1 + 0x9d) != cVar4) goto LAB_002b621c;
LAB_002b63e4:
      local_bc4 = local_bc4 | 0x200;
      if (*(char *)(param_1 + 0x9e) != cVar4) goto LAB_002b6228;
LAB_002b63f8:
      local_bc4 = local_bc4 | 0x400;
      if (*(char *)(param_1 + 0x9f) != cVar4) goto LAB_002b6234;
LAB_002b640c:
      local_bc4 = local_bc4 | 0x800;
      if (*(char *)(param_1 + 0xa0) != cVar4) goto LAB_002b6240;
LAB_002b6420:
      local_bc4 = local_bc4 | 0x1000;
      if (*(char *)(param_1 + 0xa1) != cVar4) goto LAB_002b624c;
LAB_002b6434:
      local_bc4 = local_bc4 | 0x2000;
      if (*(char *)(param_1 + 0xa2) != cVar4) goto LAB_002b6258;
LAB_002b6448:
      local_bc4 = local_bc4 | 0x4000;
      if (*(char *)(param_1 + 0xa3) != cVar4) goto LAB_002b6264;
LAB_002b645c:
      local_bc4 = local_bc4 | 0x8000;
      if (*(char *)(param_1 + 0xa4) != cVar4) goto LAB_002b6270;
LAB_002b6470:
      local_bc4 = local_bc4 | 0x10000;
      if (*(char *)(param_1 + 0xa5) != cVar4) goto LAB_002b627c;
LAB_002b6484:
      local_bc4 = local_bc4 | 0x20000;
      if (*(char *)(param_1 + 0xa6) != cVar4) goto LAB_002b6288;
LAB_002b6498:
      local_bc4 = local_bc4 | 0x40000;
      if (*(char *)(param_1 + 0xa7) != cVar4) goto LAB_002b6294;
LAB_002b64ac:
      local_bc4 = local_bc4 | 0x80000;
      if (*(char *)(param_1 + 0xa8) != cVar4) goto LAB_002b62a0;
LAB_002b64c0:
      local_bc4 = local_bc4 | 0x100000;
      if (*(char *)(param_1 + 0xa9) != cVar4) goto LAB_002b62ac;
LAB_002b64d4:
      local_bc4 = local_bc4 | 0x200000;
      if (*(char *)(param_1 + 0xaa) != cVar4) goto LAB_002b62b8;
LAB_002b64e8:
      local_bc4 = local_bc4 | 0x400000;
      if (*(char *)(param_1 + 0xab) != cVar4) goto LAB_002b62c4;
LAB_002b64fc:
      local_bc4 = local_bc4 | 0x800000;
      if (*(char *)(param_1 + 0xac) != cVar4) goto LAB_002b62d0;
LAB_002b6510:
      local_bc4 = local_bc4 | 0x1000000;
      if (*(char *)(param_1 + 0xad) != cVar4) goto LAB_002b62dc;
LAB_002b6524:
      local_bc4 = local_bc4 | 0x2000000;
      if (*(char *)(param_1 + 0xae) != cVar4) goto LAB_002b62e8;
LAB_002b6538:
      local_bc4 = local_bc4 | 0x4000000;
      if (*(char *)(param_1 + 0xaf) != cVar4) goto LAB_002b62f4;
LAB_002b654c:
      local_bc4 = local_bc4 | 0x8000000;
      if (*(char *)(param_1 + 0xb0) != cVar4) goto LAB_002b6300;
LAB_002b6560:
      local_bc4 = local_bc4 | 0x10000000;
      if (*(char *)(param_1 + 0xb1) != cVar4) goto LAB_002b630c;
LAB_002b6574:
      local_bc4 = local_bc4 | 0x20000000;
      if (*(char *)(param_1 + 0xb2) != cVar4) goto LAB_002b6318;
LAB_002b6588:
      local_bc4 = local_bc4 | 0x40000000;
      if (*(char *)(param_1 + 0xb3) == cVar4) goto LAB_002b6324;
LAB_002b659c:
      if (local_bc4 != 0) goto LAB_002b65a0;
    }
    else {
      if (*(char *)(param_1 + 0x95) == cVar4) goto LAB_002b6344;
LAB_002b61bc:
      if (*(char *)(param_1 + 0x96) == cVar4) goto LAB_002b6358;
LAB_002b61c8:
      if (*(char *)(param_1 + 0x97) == cVar4) goto LAB_002b636c;
LAB_002b61d4:
      if (*(char *)(param_1 + 0x98) == cVar4) goto LAB_002b6380;
LAB_002b61e0:
      if (*(char *)(param_1 + 0x99) == cVar4) goto LAB_002b6394;
LAB_002b61ec:
      if (*(char *)(param_1 + 0x9a) == cVar4) goto LAB_002b63a8;
LAB_002b61f8:
      if (*(char *)(param_1 + 0x9b) == cVar4) goto LAB_002b63bc;
LAB_002b6204:
      if (*(char *)(param_1 + 0x9c) == cVar4) goto LAB_002b63d0;
LAB_002b6210:
      if (*(char *)(param_1 + 0x9d) == cVar4) goto LAB_002b63e4;
LAB_002b621c:
      if (*(char *)(param_1 + 0x9e) == cVar4) goto LAB_002b63f8;
LAB_002b6228:
      if (*(char *)(param_1 + 0x9f) == cVar4) goto LAB_002b640c;
LAB_002b6234:
      if (*(char *)(param_1 + 0xa0) == cVar4) goto LAB_002b6420;
LAB_002b6240:
      if (*(char *)(param_1 + 0xa1) == cVar4) goto LAB_002b6434;
LAB_002b624c:
      if (*(char *)(param_1 + 0xa2) == cVar4) goto LAB_002b6448;
LAB_002b6258:
      if (*(char *)(param_1 + 0xa3) == cVar4) goto LAB_002b645c;
LAB_002b6264:
      if (*(char *)(param_1 + 0xa4) == cVar4) goto LAB_002b6470;
LAB_002b6270:
      if (*(char *)(param_1 + 0xa5) == cVar4) goto LAB_002b6484;
LAB_002b627c:
      if (*(char *)(param_1 + 0xa6) == cVar4) goto LAB_002b6498;
LAB_002b6288:
      if (*(char *)(param_1 + 0xa7) == cVar4) goto LAB_002b64ac;
LAB_002b6294:
      if (*(char *)(param_1 + 0xa8) == cVar4) goto LAB_002b64c0;
LAB_002b62a0:
      if (*(char *)(param_1 + 0xa9) == cVar4) goto LAB_002b64d4;
LAB_002b62ac:
      if (*(char *)(param_1 + 0xaa) == cVar4) goto LAB_002b64e8;
LAB_002b62b8:
      if (*(char *)(param_1 + 0xab) == cVar4) goto LAB_002b64fc;
LAB_002b62c4:
      if (*(char *)(param_1 + 0xac) == cVar4) goto LAB_002b6510;
LAB_002b62d0:
      if (*(char *)(param_1 + 0xad) == cVar4) goto LAB_002b6524;
LAB_002b62dc:
      if (*(char *)(param_1 + 0xae) == cVar4) goto LAB_002b6538;
LAB_002b62e8:
      if (*(char *)(param_1 + 0xaf) == cVar4) goto LAB_002b654c;
LAB_002b62f4:
      if (*(char *)(param_1 + 0xb0) == cVar4) goto LAB_002b6560;
LAB_002b6300:
      if (*(char *)(param_1 + 0xb1) == cVar4) goto LAB_002b6574;
LAB_002b630c:
      if (*(char *)(param_1 + 0xb2) == cVar4) goto LAB_002b6588;
LAB_002b6318:
      if (*(char *)(param_1 + 0xb3) != cVar4) goto LAB_002b659c;
LAB_002b6324:
      local_bc4 = local_bc4 | 0x80000000;
LAB_002b65a0:
      uVar12 = *(undefined8 *)(param_1 + 0x70);
      memcpy(auStack_bdc,&local_bc4,4);
      FUN_002b1020(local_bd4,uVar12,auStack_bdc,local_60c,local_6c,0);
      if (local_bd4[0] != 0) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0xffff;
    *(undefined8 *)(param_1 + 0xbc) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined2 *)(param_1 + 0xd0) = 0;
    *(undefined1 *)(param_1 + 0xd2) = 0;
    memset((char *)(param_1 + 0x94),0xff,0x20);
    uVar10 = 0xb;
    goto LAB_002b69f8;
  }
  if (iVar3 != 1) {
    return;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    return;
  }
  memset(&local_6c,0,4);
  puVar6 = PTR_DAT_04bcd028;
  cVar4 = *(char *)(param_1 + 0xb8);
  if (*(char *)(param_1 + 0x94) == cVar4) {
    local_6c = local_6c | 1;
    if (*(char *)(param_1 + 0x95) != cVar4) goto LAB_002b5f28;
LAB_002b6630:
    local_6c = local_6c | 2;
    if (*(char *)(param_1 + 0x96) != cVar4) goto LAB_002b5f34;
LAB_002b6644:
    local_6c = local_6c | 4;
    if (*(char *)(param_1 + 0x97) != cVar4) goto LAB_002b5f40;
LAB_002b6658:
    local_6c = local_6c | 8;
    if (*(char *)(param_1 + 0x98) != cVar4) goto LAB_002b5f4c;
LAB_002b666c:
    local_6c = local_6c | 0x10;
    if (*(char *)(param_1 + 0x99) != cVar4) goto LAB_002b5f58;
LAB_002b6680:
    local_6c = local_6c | 0x20;
    if (*(char *)(param_1 + 0x9a) != cVar4) goto LAB_002b5f64;
LAB_002b6694:
    local_6c = local_6c | 0x40;
    if (*(char *)(param_1 + 0x9b) != cVar4) goto LAB_002b5f70;
LAB_002b66a8:
    local_6c = local_6c | 0x80;
    if (*(char *)(param_1 + 0x9c) != cVar4) goto LAB_002b5f7c;
LAB_002b66bc:
    local_6c = local_6c | 0x100;
    if (*(char *)(param_1 + 0x9d) != cVar4) goto LAB_002b5f88;
LAB_002b66d0:
    local_6c = local_6c | 0x200;
    if (*(char *)(param_1 + 0x9e) != cVar4) goto LAB_002b5f94;
LAB_002b66e4:
    local_6c = local_6c | 0x400;
    if (*(char *)(param_1 + 0x9f) != cVar4) goto LAB_002b5fa0;
LAB_002b66f8:
    local_6c = local_6c | 0x800;
    if (*(char *)(param_1 + 0xa0) != cVar4) goto LAB_002b5fac;
LAB_002b670c:
    local_6c = local_6c | 0x1000;
    if (*(char *)(param_1 + 0xa1) != cVar4) goto LAB_002b5fb8;
LAB_002b6720:
    local_6c = local_6c | 0x2000;
    if (*(char *)(param_1 + 0xa2) != cVar4) goto LAB_002b5fc4;
LAB_002b6734:
    local_6c = local_6c | 0x4000;
    if (*(char *)(param_1 + 0xa3) != cVar4) goto LAB_002b5fd0;
LAB_002b6748:
    local_6c = local_6c | 0x8000;
    if (*(char *)(param_1 + 0xa4) != cVar4) goto LAB_002b5fdc;
LAB_002b675c:
    local_6c = local_6c | 0x10000;
    if (*(char *)(param_1 + 0xa5) != cVar4) goto LAB_002b5fe8;
LAB_002b6770:
    local_6c = local_6c | 0x20000;
    if (*(char *)(param_1 + 0xa6) != cVar4) goto LAB_002b5ff4;
LAB_002b6784:
    local_6c = local_6c | 0x40000;
    if (*(char *)(param_1 + 0xa7) != cVar4) goto LAB_002b6000;
LAB_002b6798:
    local_6c = local_6c | 0x80000;
    if (*(char *)(param_1 + 0xa8) != cVar4) goto LAB_002b600c;
LAB_002b67ac:
    local_6c = local_6c | 0x100000;
    if (*(char *)(param_1 + 0xa9) != cVar4) goto LAB_002b6018;
LAB_002b67c0:
    local_6c = local_6c | 0x200000;
    if (*(char *)(param_1 + 0xaa) != cVar4) goto LAB_002b6024;
LAB_002b67d4:
    local_6c = local_6c | 0x400000;
    if (*(char *)(param_1 + 0xab) != cVar4) goto LAB_002b6030;
LAB_002b67e8:
    local_6c = local_6c | 0x800000;
    if (*(char *)(param_1 + 0xac) != cVar4) goto LAB_002b603c;
LAB_002b67fc:
    local_6c = local_6c | 0x1000000;
    if (*(char *)(param_1 + 0xad) != cVar4) goto LAB_002b6048;
LAB_002b6810:
    local_6c = local_6c | 0x2000000;
    if (*(char *)(param_1 + 0xae) != cVar4) goto LAB_002b6054;
LAB_002b6824:
    local_6c = local_6c | 0x4000000;
    if (*(char *)(param_1 + 0xaf) != cVar4) goto LAB_002b6060;
LAB_002b6838:
    local_6c = local_6c | 0x8000000;
    if (*(char *)(param_1 + 0xb0) != cVar4) goto LAB_002b606c;
LAB_002b684c:
    local_6c = local_6c | 0x10000000;
    if (*(char *)(param_1 + 0xb1) != cVar4) goto LAB_002b6078;
LAB_002b6860:
    local_6c = local_6c | 0x20000000;
    if (*(char *)(param_1 + 0xb2) != cVar4) goto LAB_002b6084;
LAB_002b6874:
    local_6c = local_6c | 0x40000000;
    if (*(char *)(param_1 + 0xb3) == cVar4) goto LAB_002b6090;
LAB_002b6888:
    if (local_6c == 0) {
      FUN_002b56b4(param_1);
      uVar10 = 0xc;
      goto LAB_002b69f8;
    }
  }
  else {
    if (*(char *)(param_1 + 0x95) == cVar4) goto LAB_002b6630;
LAB_002b5f28:
    if (*(char *)(param_1 + 0x96) == cVar4) goto LAB_002b6644;
LAB_002b5f34:
    if (*(char *)(param_1 + 0x97) == cVar4) goto LAB_002b6658;
LAB_002b5f40:
    if (*(char *)(param_1 + 0x98) == cVar4) goto LAB_002b666c;
LAB_002b5f4c:
    if (*(char *)(param_1 + 0x99) == cVar4) goto LAB_002b6680;
LAB_002b5f58:
    if (*(char *)(param_1 + 0x9a) == cVar4) goto LAB_002b6694;
LAB_002b5f64:
    if (*(char *)(param_1 + 0x9b) == cVar4) goto LAB_002b66a8;
LAB_002b5f70:
    if (*(char *)(param_1 + 0x9c) == cVar4) goto LAB_002b66bc;
LAB_002b5f7c:
    if (*(char *)(param_1 + 0x9d) == cVar4) goto LAB_002b66d0;
LAB_002b5f88:
    if (*(char *)(param_1 + 0x9e) == cVar4) goto LAB_002b66e4;
LAB_002b5f94:
    if (*(char *)(param_1 + 0x9f) == cVar4) goto LAB_002b66f8;
LAB_002b5fa0:
    if (*(char *)(param_1 + 0xa0) == cVar4) goto LAB_002b670c;
LAB_002b5fac:
    if (*(char *)(param_1 + 0xa1) == cVar4) goto LAB_002b6720;
LAB_002b5fb8:
    if (*(char *)(param_1 + 0xa2) == cVar4) goto LAB_002b6734;
LAB_002b5fc4:
    if (*(char *)(param_1 + 0xa3) == cVar4) goto LAB_002b6748;
LAB_002b5fd0:
    if (*(char *)(param_1 + 0xa4) == cVar4) goto LAB_002b675c;
LAB_002b5fdc:
    if (*(char *)(param_1 + 0xa5) == cVar4) goto LAB_002b6770;
LAB_002b5fe8:
    if (*(char *)(param_1 + 0xa6) == cVar4) goto LAB_002b6784;
LAB_002b5ff4:
    if (*(char *)(param_1 + 0xa7) == cVar4) goto LAB_002b6798;
LAB_002b6000:
    if (*(char *)(param_1 + 0xa8) == cVar4) goto LAB_002b67ac;
LAB_002b600c:
    if (*(char *)(param_1 + 0xa9) == cVar4) goto LAB_002b67c0;
LAB_002b6018:
    if (*(char *)(param_1 + 0xaa) == cVar4) goto LAB_002b67d4;
LAB_002b6024:
    if (*(char *)(param_1 + 0xab) == cVar4) goto LAB_002b67e8;
LAB_002b6030:
    if (*(char *)(param_1 + 0xac) == cVar4) goto LAB_002b67fc;
LAB_002b603c:
    if (*(char *)(param_1 + 0xad) == cVar4) goto LAB_002b6810;
LAB_002b6048:
    if (*(char *)(param_1 + 0xae) == cVar4) goto LAB_002b6824;
LAB_002b6054:
    if (*(char *)(param_1 + 0xaf) == cVar4) goto LAB_002b6838;
LAB_002b6060:
    if (*(char *)(param_1 + 0xb0) == cVar4) goto LAB_002b684c;
LAB_002b606c:
    if (*(char *)(param_1 + 0xb1) == cVar4) goto LAB_002b6860;
LAB_002b6078:
    if (*(char *)(param_1 + 0xb2) == cVar4) goto LAB_002b6874;
LAB_002b6084:
    if (*(char *)(param_1 + 0xb3) != cVar4) goto LAB_002b6888;
LAB_002b6090:
    local_6c = local_6c | 0x80000000;
  }
  uVar9 = *(uint *)(param_1 + 0xbc);
  uVar11 = *(uint *)(param_1 + 0x90);
  if (uVar9 < uVar11) {
    puVar1 = PTR_DAT_04bce170 + 0x10;
    do {
      uVar5 = *(ushort *)(*(long *)(param_1 + 0x70) + 0x660) - 0xb;
      uVar2 = uVar11 - uVar9;
      if (uVar5 <= uVar11 - uVar9) {
        uVar2 = uVar5;
      }
      uVar8 = FUN_002b1944(*(long *)(param_1 + 0x70),(ulong)uVar2);
      if ((uVar8 & 1) == 0) {
        if (*(int *)(PTR_DAT_04bccf10 + 0x2b0) == -1) {
          return;
        }
        *(int *)(PTR_DAT_04bccf10 + 0x2b0) = *(int *)(PTR_DAT_04bccf10 + 0x2b0) + 1;
        return;
      }
      uVar9 = *(uint *)(param_1 + 0xbc);
      local_bb6 = 0;
      if (*(uint *)(param_1 + 0x90) != 0) {
        local_bb6 = (undefined1)(((uVar9 + uVar2) * 100) / *(uint *)(param_1 + 0x90));
      }
      uVar13 = 1;
      if ((ulong)uVar9 != 0) {
        uVar13 = 2;
      }
      local_bb8 = CONCAT11(*(undefined1 *)(param_1 + 0xb8),uVar13);
      *(undefined1 *)(param_1 + 0xd2) = local_bb6;
      local_bc0 = puVar1;
      local_bb0 = uVar2;
      memcpy(auStack_bac,(void *)(*(long *)(param_1 + 0x80) + (ulong)uVar9),(ulong)uVar2);
      FUN_002b72d8(local_bd4,&local_bc0,local_60c,&local_bc4,0x5a0);
      uVar12 = *(undefined8 *)(param_1 + 0x70);
      memcpy(auStack_bd8,&local_6c,4);
      FUN_002b1020(local_bd4,uVar12,auStack_bd8,local_60c,local_bc4,param_1 + 0xd0);
      uVar9 = *(int *)(param_1 + 0xbc) + uVar2;
      lVar7 = *(long *)puVar6;
      *(uint *)(param_1 + 0xbc) = uVar9;
      if (lVar7 != 0) {
        uVar12 = FUN_002290b0(lVar7,5);
        FUN_0022910c(uVar12,*(undefined2 *)(*(long *)(param_1 + 0x70) + 0x32));
        uVar9 = *(uint *)(param_1 + 0xbc);
      }
      uVar11 = *(uint *)(param_1 + 0x90);
    } while (uVar9 < uVar11);
  }
  uVar10 = 2;
LAB_002b69f8:
  *(undefined4 *)(param_1 + 0x78) = uVar10;
  return;
}

