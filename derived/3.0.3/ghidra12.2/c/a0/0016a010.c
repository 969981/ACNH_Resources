
undefined8 FUN_0016a010(long *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  
  switch(param_2) {
  case 2:
    if ((*(char *)((long)param_1 + 1) == 'e') && ((char)*param_1 == 't')) {
      return 0x3d;
    }
    break;
  case 3:
    if (*(char *)((long)param_1 + 2) == 'e') {
      if ((short)*param_1 == 0x6761) {
        return 0x14;
      }
    }
    else if ((*(char *)((long)param_1 + 2) == 'a') && ((short)*param_1 == 0x6976)) {
      return 0x3b;
    }
    break;
  case 4:
    cVar2 = *(char *)((long)param_1 + 3);
    switch(cVar2) {
    case 'e':
      if ((short)*param_1 == 0x6164 && *(char *)((long)param_1 + 2) == 't') {
        return 0x20;
      }
      break;
    case 'f':
    case 'h':
    case 'i':
    case 'j':
    case 'l':
      break;
    case 'g':
      if ((short)*param_1 == 0x7465 && *(char *)((long)param_1 + 2) == 'a') {
        return 0x21;
      }
      break;
    case 'k':
      if ((short)*param_1 == 0x696c && *(char *)((long)param_1 + 2) == 'n') {
        return 0x2c;
      }
      break;
    case 'm':
      if ((short)*param_1 == 0x7266 && *(char *)((long)param_1 + 2) == 'o') {
        return 0x24;
      }
      break;
    default:
      if (cVar2 == 't') {
        if ((short)*param_1 == 0x6f68 && *(char *)((long)param_1 + 2) == 's') {
          return 0x25;
        }
      }
      else if ((cVar2 == 'y') && ((short)*param_1 == 0x6176 && *(char *)((long)param_1 + 2) == 'r'))
      {
        return 0x3a;
      }
    }
    break;
  case 5:
    cVar2 = *(char *)((long)param_1 + 4);
    if (cVar2 == 'w') {
      if ((int)*param_1 == 0x6f6c6c61) {
        return 0x15;
      }
    }
    else if (cVar2 == 'h') {
      if ((int)*param_1 == 0x7461703a) {
        return 3;
      }
    }
    else if ((cVar2 == 'e') && ((int)*param_1 == 0x676e6172)) {
      return 0x31;
    }
    break;
  case 6:
    cVar2 = *(char *)((long)param_1 + 5);
    if (cVar2 == 't') {
      if ((int)*param_1 == 0x65636361 && *(char *)((long)param_1 + 4) == 'p') {
        return 0x12;
      }
      if ((int)*param_1 == 0x65707865 && *(char *)((long)param_1 + 4) == 'c') {
        return 0x22;
      }
    }
    else if (cVar2 == 'r') {
      if ((int)*param_1 == 0x76726573 && *(char *)((long)param_1 + 4) == 'e') {
        return 0x35;
      }
    }
    else if ((cVar2 == 'e') && ((int)*param_1 == 0x6b6f6f63 && *(char *)((long)param_1 + 4) == 'i'))
    {
      return 0x1f;
    }
    break;
  case 7:
    bVar1 = *(byte *)((long)param_1 + 6);
    if (bVar1 < 0x68) {
      if (bVar1 == 100) {
        if ((int)*param_1 == 0x74656d3a && *(short *)((long)param_1 + 4) == 0x6f68) {
          return 1;
        }
      }
      else if (bVar1 == 0x65) {
        if ((int)*param_1 == 0x6863733a && *(short *)((long)param_1 + 4) == 0x6d65) {
          return 5;
        }
        if ((int)*param_1 == 0x72677075 && *(short *)((long)param_1 + 4) == 0x6461) {
          return 0x41;
        }
      }
    }
    else if (bVar1 == 0x68) {
      if ((int)*param_1 == 0x72666572 && *(short *)((long)param_1 + 4) == 0x7365) {
        return 0x33;
      }
    }
    else if (bVar1 == 0x72) {
      if ((int)*param_1 == 0x65666572 && *(short *)((long)param_1 + 4) == 0x6572) {
        return 0x32;
      }
    }
    else if (bVar1 == 0x73) {
      if ((int)*param_1 == 0x6174733a && *(short *)((long)param_1 + 4) == 0x7574) {
        return 7;
      }
      if ((int)*param_1 == 0x69707865 && *(short *)((long)param_1 + 4) == 0x6572) {
        return 0x23;
      }
    }
    break;
  case 8:
    cVar2 = *(char *)((long)param_1 + 7);
    if (cVar2 == 'n') {
      if ((int)*param_1 == 0x61636f6c && *(int *)((long)param_1 + 3) == 0x6f697461) {
        return 0x2d;
      }
    }
    else if (cVar2 == 'h') {
      if ((int)*param_1 == 0x6d2d6669 && *(int *)((long)param_1 + 3) == 0x6374616d) {
        return 0x26;
      }
    }
    else if ((cVar2 == 'e') &&
            ((int)*param_1 == 0x722d6669 && *(int *)((long)param_1 + 3) == 0x676e6172)) {
      return 0x29;
    }
    break;
  case 9:
    if (((char)param_1[1] == 'l') && (*param_1 == 0x6f636f746f72703a)) {
      return 0x42;
    }
    break;
  case 10:
    bVar1 = *(byte *)((long)param_1 + 9);
    if (bVar1 < 0x74) {
      if (bVar1 == 0x65) {
        if (*param_1 == 0x696c612d7065656b && (char)param_1[1] == 'v') {
          return 0x3f;
        }
        if (*param_1 == 0x6b6f6f632d746573 && (char)param_1[1] == 'i') {
          return 0x36;
        }
      }
      else if ((bVar1 == 0x6e) && (*param_1 == 0x697463656e6e6f63 && (char)param_1[1] == 'o')) {
        return 0x3e;
      }
    }
    else if (bVar1 == 0x74) {
      if (*param_1 == 0x6567612d72657375 && (char)param_1[1] == 'n') {
        return 0x39;
      }
    }
    else if ((bVar1 == 0x79) && (*param_1 == 0x69726f687475613a && (char)param_1[1] == 't')) {
      return 0;
    }
    break;
  case 0xb:
    if ((*(char *)((long)param_1 + 10) == 'r') &&
       (*param_1 == 0x66612d7972746572 && (short)param_1[1] == 0x6574)) {
      return 0x34;
    }
    break;
  case 0xc:
    if (*(char *)((long)param_1 + 0xb) == 's') {
      if (*param_1 == 0x77726f662d78616d && *(long *)((long)param_1 + 3) == 0x64726177726f662d) {
        return 0x2e;
      }
    }
    else if ((*(char *)((long)param_1 + 0xb) == 'e') &&
            (*param_1 == 0x2d746e65746e6f63 && *(long *)((long)param_1 + 3) == 0x7079742d746e6574))
    {
      return 0x1e;
    }
    break;
  case 0xd:
    switch(*(char *)((long)param_1 + 0xc)) {
    case 'd':
      if (*param_1 == 0x646f6d2d7473616c && (int)param_1[1] == 0x65696669) {
        return 0x2b;
      }
      break;
    case 'e':
      if (*param_1 == 0x2d746e65746e6f63 && (int)param_1[1] == 0x676e6172) {
        return 0x1d;
      }
      break;
    case 'f':
    case 'g':
    case 'i':
    case 'j':
    case 'k':
    case 'm':
      break;
    case 'h':
      if (*param_1 == 0x2d656e6f6e2d6669 && (int)param_1[1] == 0x6374616d) {
        return 0x28;
      }
      break;
    case 'l':
      if (*param_1 == 0x6f632d6568636163 && (int)param_1[1] == 0x6f72746e) {
        return 0x17;
      }
      break;
    case 'n':
      if (*param_1 == 0x7a69726f68747561 && (int)param_1[1] == 0x6f697461) {
        return 0x16;
      }
      break;
    default:
      if ((*(char *)((long)param_1 + 0xc) == 's') &&
         (*param_1 == 0x722d747065636361 && (int)param_1[1] == 0x65676e61)) {
        return 0x11;
      }
    }
    break;
  case 0xe:
    if (*(char *)((long)param_1 + 0xd) == 't') {
      if (*param_1 == 0x632d747065636361 && *(long *)((long)param_1 + 5) == 0x6573726168632d74) {
        return 0xe;
      }
    }
    else if ((*(char *)((long)param_1 + 0xd) == 'h') &&
            (*param_1 == 0x2d746e65746e6f63 && *(long *)((long)param_1 + 5) == 0x74676e656c2d746e))
    {
      return 0x1b;
    }
    break;
  case 0xf:
    if (*(char *)((long)param_1 + 0xe) == 'g') {
      if (*param_1 == 0x652d747065636361 && *(long *)((long)param_1 + 6) == 0x6e69646f636e652d) {
        return 0xf;
      }
    }
    else if ((*(char *)((long)param_1 + 0xe) == 'e') &&
            (*param_1 == 0x6c2d747065636361 && *(long *)((long)param_1 + 6) == 0x676175676e616c2d))
    {
      return 0x10;
    }
    break;
  case 0x10:
    cVar2 = *(char *)((long)param_1 + 0xf);
    if (cVar2 == 'n') {
      if (*param_1 == 0x2d746e65746e6f63 && *(long *)((long)param_1 + 7) == 0x6f697461636f6c2d) {
        return 0x1c;
      }
      if (*param_1 == 0x6f632d79786f7270 && *(long *)((long)param_1 + 7) == 0x6f697463656e6e6f) {
        return 0x40;
      }
    }
    else if (cVar2 == 'g') {
      if (*param_1 == 0x2d746e65746e6f63 && *(long *)((long)param_1 + 7) == 0x6e69646f636e652d) {
        return 0x19;
      }
    }
    else if (cVar2 == 'e') {
      if (*param_1 == 0x2d746e65746e6f63 && *(long *)((long)param_1 + 7) == 0x676175676e616c2d) {
        return 0x1a;
      }
      if (*param_1 == 0x687475612d777777 && *(long *)((long)param_1 + 7) == 0x74616369746e6568) {
        return 0x3c;
      }
    }
    break;
  case 0x11:
    if ((char)param_1[2] == 'g') {
      if (*param_1 == 0x726566736e617274 && param_1[1] == 0x6e69646f636e652d) {
        return 0x38;
      }
    }
    else if (((char)param_1[2] == 'e') &&
            (*param_1 == 0x6669646f6d2d6669 && param_1[1] == 0x636e69732d646569)) {
      return 0x27;
    }
    break;
  case 0x12:
    if ((*(char *)((long)param_1 + 0x11) == 'e') &&
       ((*param_1 == 0x75612d79786f7270 && param_1[1] == 0x616369746e656874) &&
        (char)param_1[2] == 't')) {
      return 0x2f;
    }
    break;
  case 0x13:
    if (*(char *)((long)param_1 + 0x12) == 'n') {
      if ((*param_1 == 0x2d746e65746e6f63 && param_1[1] == 0x7469736f70736964) &&
          (short)param_1[2] == 0x6f69) {
        return 0x18;
      }
      if ((*param_1 == 0x75612d79786f7270 && param_1[1] == 0x74617a69726f6874) &&
          (short)param_1[2] == 0x6f69) {
        return 0x30;
      }
    }
    else if ((*(char *)((long)param_1 + 0x12) == 'e') &&
            ((*param_1 == 0x646f6d6e752d6669 && param_1[1] == 0x69732d6465696669) &&
             (short)param_1[2] == 0x636e)) {
      return 0x2a;
    }
    break;
  case 0x19:
    if (((char)param_1[3] == 'y') &&
       ((*param_1 == 0x742d746369727473 && param_1[1] == 0x74726f70736e6172) &&
        param_1[2] == 0x746972756365732d)) {
      return 0x37;
    }
    break;
  case 0x1b:
    if ((*(char *)((long)param_1 + 0x1a) == 'n') &&
       (((*param_1 == 0x632d737365636361 && param_1[1] == 0x612d6c6f72746e6f) &&
        param_1[2] == 0x69726f2d776f6c6c) && (short)param_1[3] == 0x6967)) {
      return 0x13;
    }
  }
  return 0xffffffff;
}

